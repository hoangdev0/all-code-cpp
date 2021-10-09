#include <bits/stdc++.h>

#define N 1005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forl(value,begin,end,up) for(int value = begin;value >= end;value-=up)
#define elf else if
// typedef unsigned long long ll

int n, d(0), a[N];
using namespace std;
bool gcd(int a, int b)
{
	if(__gcd(a, b)==1) return true;
	return false;
}
int main()
{
	fr("GCDSUBAR.inp");
	fw("GCDSUBAR.out");
	cin >> n;
	For(i, 1, n, 1)
	{
		cin >> a[i];
	}
	For(i, 1, n, 1)
	{
		if(a[i]%2!=0)
		{
			bool k = false;
			For(j, i, n-1, 1)
			{
				if (gcd(a[j], a[j+1]))
				{
					if(!gcd(a[j+1], a[j+2]))
						d++;
				}
			}
		}
	}
	if(d==0)
		cout << -1;
	else cout << d;
	return 0;
}