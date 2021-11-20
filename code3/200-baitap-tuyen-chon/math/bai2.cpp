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
int t;
ll n;
int conv(int x)
{
	if (x == 0)
		return true;
	return false;
}
ll solve(ll n)
{
	int x;
	ll s = 0;
	while (n > 0)
	{
		x = n % 10;
		if (conv(x))
			x = 5;
		s = s * 10 + x;
		n /= 10;
	}
	n = s;
	s = 0;
	while (n > 0)
	{
		s = s * 10 + (n % 10);
		n /= 10;
	}
	return s;
}

int main()
{
	fw("bai2.inp");
	fr("bai2.inp");
	fw("bai2.out");

	cin >> t;
	For(i, 1, t, 1)
	{
		cin >> n;
		cout << solve(n) << endl;
	}

	return 0;
}