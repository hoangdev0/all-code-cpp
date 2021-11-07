#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e5 + 5;
int n, a[N], m, d(0), s(0);
bool cm(int a, int b)
{
	return a > b;
}
int main()
{
	fr("camdien.inp");
	fw("camdien.out");

	cin >> n >> m;
	For(i, 1, n, 1)
	{
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cm);
	int i(1),s(a[1]);
	while (i <= n)
	{
		if (s >= m)
		{
			cout << i;
			return 0;
		}
		s += a[i] - 1;
		i++;
		if (a[i] <= 1)
		{
			cout << -1;
			return 0;
		}
	}
	return 0;
}