#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
typedef unsigned long long ll;
const int N = 1e6 + 5;
using namespace std;
bool kt(int n)
{
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}
int a, b, n, c[N], i, s, sum(0);
int main()
{
	fr("divgame.inp");
	fw("divgame.out");
	cin >> n;
	For(x, 1, n, 1)
	{
		fill(c + 1, c + n + 1, 0);
		cin >> a >> b;
		if (a == b && kt(a))
			cout << 1;
		else
		{
			for (i = b + 1; i <= a; i++)
			{
				s = i;
				for (int j = 2; j <= s; j++)
					if (s % j == 0)
						while (s % j == 0)
						{
							c[j]++;
							s /= j;
						}
			}
			For(j, 2, i, 1) if (c[j] > 0) sum += c[j];
			cout << sum;
		}
	}
	return 0;
}