#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int n,i(1000),j(1000);
int main()
{
	fr("snn.inp");
	fw("snn.out");
	cin >> n;
	for (int x = 2; x * x <= n;x++)
	{
		if(n%x==0)
		{
			if(i*10+j > x*10+(n/x)) 
			{
				i = x;
				j = n / x;
			}
		}
	}
	if(i==1000&&j==1000)
		cout << -1;
		else{
			cout << i << j;
		}
	return 0;
}