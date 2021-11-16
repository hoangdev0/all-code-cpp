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
int n;
double dq(int n)
{
	if(n == 1)
		return 1;
	if(n % 2 == 0)
		return (((double)-1 /n) + 1/dq(n - 1));
	return ((double) 1/n + 1/dq(n-1));
}
int main()
{
	fr("sum.inp");
	fw("sum.out");

	cin >> n;
	cout << dq(n);
	return 0;
}