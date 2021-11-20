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
string s1, s, t;
int n, x, d(0), d1(0), x1(1), x2(0), res(0);
int kt(int i)
{
	int k(0);
	for (int j = i; j < i + x; j++)
	{
		if (s[j] == 'D')
			k++;
	}
	return k;
}
int main()
{
	fr("cake.inp");
	fw("cake.out");

	cin >> n >> s1;
	s = s1 + s1;
	x = (n / 2);
	for (int i = 0; i < n-x; i++)
	{
		d = kt(i);
		d1 = kt(i + x);
		if (d == d1)
		{
			cout << ((i + 1) % n) << " " << ((i + x) % n) << endl;
		}
	}
	return 0;
}