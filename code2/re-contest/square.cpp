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
int n, x(0), y(0), xx(0), yx(0);
int xm(N), ym(N), m(0);
int main()
{
	fr("square.inp");
	fw("square.out");
	cin >> n;
	For(i, 1, n, 1)
	{
		cin >> x >> y;
		xx = max(x, xx);
		yx = max(yx, y);
		xm = min(x, xm);
		ym = min(ym, y);
	}
	x = xx - xm;
	y = yx - ym;
	m = max(x, y);
	cout << (m * m);
	return 0;
}