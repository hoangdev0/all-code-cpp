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
int n, res, ma(0), x1, x,s(0);
int main()
{
	fr("maxgif.inp");
	fw("maxgif.out");

	cin >> n;
	x = 0;
	For(i,1,n,1)
	{
		x1 = x;
		cin >> x;
		s = x + x1;
		ma = max(ma, s);
	}
	cout << ma;
	return 0;
}