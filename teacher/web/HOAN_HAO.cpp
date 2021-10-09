#include<bits/stdc++.h>
#include<string>
// #define N 1000005
#define fr(name) freopen(name,"r",stdin);
#define fw(name) freopen(name,"w",stdout);
#define For(value,begin,end,up) for(int value = begin;value <= end;value+=up)
// #define Forl(value,begin,end,up) for(int value = begin;value >= end;value-=up)
#define elf else if
// typedef unsigned long long ll;
bool c(int n)
{
	if(n == 6|| n == 28 || n==496||n==8128) return true;
	return false;
}
using namespace std;
int main()
{
	fr("HOAN_HAO.inp");
	fw("HOAN_HAO.out");
	int n,s(0);
	cin >> n;
	For(i,6,n,2)
	{
		if(c(i)) s+=i;
	}
	cout << s;
	return 0;
}