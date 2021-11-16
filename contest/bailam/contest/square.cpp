#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
// const int N =1e6+5;
int n, m(0), x(0), y(0), xm(200), ym(200), a, b;
/* void test()
{
	fw("square.inp");
	srand(time(NULL));
	int n = 20;
	cout << n << endl;
	For(i, 1, n, 1)
			cout
		<< 1 + rand() % 100 << " " << 1 + rand() % 100 << endl;
} */
int main()
{
	// test();
	fr("square.inp");
	fw("square.out");

	cin >> n;
	For(i, 1, n, 1)
	{
		cin >> a >> b;
		x = max(x, a);
		y = max(y, b);
		xm = min(a, xm);
		ym = min(b, ym);
	}
	x -= xm;
	y -= ym;
	m = max(x, y);
	cout << m * m;
	return 0;
}