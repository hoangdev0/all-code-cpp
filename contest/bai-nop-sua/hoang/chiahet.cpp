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

// int a[N], b[N], n, m, x, res(0);
int n, m, res(0), x;
int main()
{
	
	fr("chiahet.inp");
	fw("chiahet.out");

	cin >> n >> m;

	for (int i = 2; i <= n; i++)
	{
		x = i;
		while (x % m == 0)
		{
			res++;
			x /= m;
		}
	}
	cout << res;

	// fill(a + 1, a + N + 1, 0);
	// fill(b + 1, b + N + 1, 0);
	// for (int i = 2; i <= n; i++)
	// 	for (int j = 2; j <= i; j++)
	// 	{
	// 		x = i;
	// 		while (x % j == 0)
	// 		{
	// 			a[j]++;
	// 			x /= j;
	// 		}
	// 	}

	// for (int i = 2; i <= m; i++)
	// 	while (m % i == 0)
	// 	{
	// 		b[i]++;
	// 		m /= i;
	// 	}

	// for (int i = 2; i <= n; i++)
	// 	if (a[i] > 0 && b[i] > 0)
	// 		res += a[i] / b[i];

	return 0;
}