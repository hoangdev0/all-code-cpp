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
int t, n;
int main()
{
	fr("bai2.inp");
	fw("bai2.out");

	cin >> t;
	For(i, 1, t, 1)
	{
		cin >> n;
		cout << (7 - n) << endl;
	}

	return 0;
}