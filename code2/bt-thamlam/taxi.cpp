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
int n, d(0), d1(0), d2(0), d3(0), x;
int main()
{
	fr("taxi.inp");
	fw("taxi.out");

	cin >> n;
	For(i, 1, n, 1)
	{
		cin >> x;
		if (x == 1)
			d1++;
		elf(x == 2) d2++;
		elf(x == 3) d3++;
		else d++;
	}
	d += d3;
	if (d1 >= d3)
		d1 -= d3;
	else
		d1 = 0;
	if (d2 % 2 == 0)
	{
		d += (d2 / 2);
		d2 -= (d2 / 2) * 2;
	}
	if (d2 > 0)
		d1++;
	if (d1 % 4 == 0)
		d += (d1 / 4);
	else
		d += (d1 / 4) + 1;
	cout << d;

	return 0;
}