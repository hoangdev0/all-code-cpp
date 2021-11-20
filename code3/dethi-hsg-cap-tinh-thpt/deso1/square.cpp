#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N =1e6+5;
int res(0), x(0), y(0), a(N), b(N), c, d, n;
int main()
{
	fr("square.inp");
	fw("square.out");

	cin >> n;
	For(i, 1, n, 1)
	{
		cin >> c >> d;
		x = max(x, c);
		y = max(y, d);
		a = min(a, c);
		b = min(b, d);
	}
	x -= a;
	y -= b;
	// cout << x << " " << y << a << " " << b << endl;
	res = max(x, y);
	cout << res * res;

	return 0;
}