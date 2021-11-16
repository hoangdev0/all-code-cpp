#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 3e4 + 5;

int a[N], n, m, x, res(N);
bool c[N];
// int n, m, res(0), x;
void sang()
{
	fill(c + 1, c + 1 + N, true);
	c[0] = false;
	c[1] = false;
	for (int i = 2; i * i <= N; i++)
	{
		if (c[i])
			for (int j = i * i; j <= N; j += i)
				c[j] = false;
	}
}
int main()
{

	sang();
	fr("chiahet.inp");
	fw("chiahet.out");

	fill(a + 1, a + N + 1, 0);
	// fill(b + 1, b + N + 1, 0);
	cin >> n >> m;

	if (m == 1 || n == 1)
	{
		cout << 0;
		return 0;
	}
	for (int i = 2; i <= n; i++)
	{
		if (c[i])
			a[i]++;
		else
		{
			for (int j = 2; j <= i; j++)
				if (c[j])
				{
					x = i;
					while (x % j == 0)
					{
						a[j]++;
						x /= j;
					}
				}
		}
	}
	for (int i = 2; i <= m; i++)
	{
		int d = 0;
		while (m % i == 0)
		{
			d++;
			m /= i;
		}
		if (d > 0)
			res = min(res, a[i] / d);
	}

	if (res == N)
		cout << 0;
	else
		cout << res;

	return 0;
}