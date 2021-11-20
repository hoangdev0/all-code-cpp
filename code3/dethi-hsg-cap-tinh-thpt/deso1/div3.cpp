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
int n, res(0), d1(0), d2(0), x;
int main()
{
	fr("div3.inp");
	fw("div3.out");

	cin >> n;
	For(i, 1, n, 1)
	{
		cin >> x;
		if (x % 3 == 1)
			d1++;
		elf(x % 3 == 0) res++;
		else d2++;
	}
	// cout << res << " " << d1 << " " << d2 << endl;
	res = (res * (res - 1) / 2) + (d1 * d2);

	cout << res;

	return 0;
}