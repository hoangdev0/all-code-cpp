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
int n, x, s(0);
int main()
{
	fr("so_nen_toi_gian.inp");
	fw("so_nen_toi_gian.out");

	cin >> n;
	while(n>=10)
	{
		s = 0;
		while(n>0)
		{
			s += n%10;
			n /= 10;
		}
		n = s;
	}
	cout << n;
	return 0;
}