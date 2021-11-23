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
int n, d(0), res;
int maxNum(int n)
{
	int ma = 0;
	while(n>0)
	{
		ma = max((n % 10), ma);
		n /= 10;
	}
	return ma;
}
int main()
{
	fw("decrease.inp");
	cout << "27";
	fr("decrease.inp");
	fw("decrease.out");

	cin >> n;

	while(n != 0)
	{
		n -= maxNum(n);
		d++;
	}

	cout << d;

	return 0;
}