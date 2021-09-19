#include <bits/stdc++.h>
// #define N 10002
#define fr(name) freopen(name,"r",stdin);
#define fw(name) freopen(name,"w",stdout);
#define For(value,begin,end,up) for(int value = begin;value <= end;value+=up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int n,x;
ll s(0);
bool nt(int n)
{
	if(n==1) return false;
	elf(n==2) return true;
	elf(n>2)
	{
		For(i,2,sqrt(n),1)
		{
			if(n%i==0) return false;
		}
	}
	return true;
}
int main()
{
    fr("NT.inp");
	fw("NT.out");
	cin >> x;
	For(i,1,x,1) { cin >> n ; if(nt(n)) s+=n; }
	cout << s;
    return 0;
}