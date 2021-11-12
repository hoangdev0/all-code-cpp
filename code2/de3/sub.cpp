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
int n,a,b;
int sub(int x, int n)
{
	while(n>0)
	{
		if(x%10 != n%10) 
		{
			cout << n % 10;
			return 0;
		}
		x /= 10;
		n /= 10;
	}
	return 1;
}
int main()
{
	fr("sub.inp");
	fw("sub.out");

	cin >> a >> b >> n;
	sub((a - b), n);

	return 0;
}