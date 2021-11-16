#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
// const int N =1e6+5
ll n, s(0), x;
int main()
{
	fr("bai1.inp");
	fw("bai1.out");
	cin >> n;
	
	while (n > 0)
	{
		x = n % 10;
		n /= 10;
		s += (ll)(x*x*x);
	}

	cout << s;
	return 0;
}