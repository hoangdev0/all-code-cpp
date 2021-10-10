#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
bool cp(long long n)
{
	for(int i = 2;i*i<=n;i++)
	{
		if(n%i==0)
			return false;
	}
	long long s(0);
	while(n>0)
	{
		s = n % 10;
		n /= 10;
	}
	for(int i = 2;i*i<=s;i++)
	{
		if(s%i==0)
			return false;
	}
	return true;
}
long long n;
int main()
{
	fr("cprime.inp");
	fw("cprime.out");
	cin >> n;
	if(cp(n))
		cout << 1;
	else
		cout << 0;
	return 0;
}