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
long long n, i;
bool kt(long long n)
{
	for (long long i = 2; i*i<=n;i++)
	if(n%i==0) return false;
	return true;
}
int main()
{
	fr("sohoc.inp");
	fw("sohoc.out");

	cin >> n;
	i = ceil(sqrt(n));
	while (1)
	{
		if(kt(i)) 
		{
			cout << i * i;
			break;
		}
		i++;
	}
	
	return 0;
}