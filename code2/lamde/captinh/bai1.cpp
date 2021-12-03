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
ll n, s(0), d(1), res(0);
int m(0);
int main()
{
	fr("bai1.inp");
	fw("bai1.out");

	cin >> n;

	while (s < n)
	{
		res += (ll)9 * (m + 1) * d;
		m++;
		d *= (ll)10;
		s = (ll)s * 10 + 9;
	}

	cout << (ll)res + (n - s) * m;

	return 0;
}