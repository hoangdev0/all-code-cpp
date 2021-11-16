#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e6 + 5;
int a[N], n, x, s;
bool kt(int d)
{
	for (int i = d; i <= n; i++)
	{
		if (a[i] - a[i - d] >= x)
			return true;
	}
	return false;
}
void binary()
{
	int res(0);
	int l = 1, r = n;
	while (l <= r)
	{
		int g = (r + l) / 2;
		if (kt(g))
		{
			res = g;
			r = g - 1;
		}
		else
			l = g + 1;
	}
	cout << res;
}
int main()
{
	fr("maxarr.inp");
	fw("maxarr.out");
	a[0] = 0;
	cin >> n >> x;
	for (int i = 1; i <= n; i++)
	{
		cin >> s;
		a[i] = a[i - 1] + s;
	}
	if (a[n] < x)
	{
		cout << "eRorR";
		return 0;
	}
	binary();

	return 0;
}