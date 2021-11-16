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
int x, n, d(0), d1(0), d2(0), res(0);
int main()
{
	fr("div3.inp");
	fw("div3.out");

	cin >> n;
	For(i, 1, n, 1)
	{
		cin >> x;
		x %= 3;
		if (x == 0)
			d++;
		elf(x == 1) d1++;
		else d2++;
	}
	res = (d * (d - 1)) / 2 + (d1 * d2);
	cout << res;
	return 0;
}