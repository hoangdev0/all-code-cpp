#include <bits/stdc++.h>
#define N 1000002
#define fr(name) freopen(name,"r",stdin);
#define fw(name) freopen(name,"w",stdout);
#define For(value,begin,end,up) for(int value = begin;value <= end;value+=up)
// #define elf else if
typedef unsigned long long ll;
using namespace std;
bool a[N];
int n,x;
ll s(0);
void snt()
{
	memset(a,true,N);
	a[1] = false;
	For(i,2,sqrt(N),1)
		if(a[i])
			For(j,i*i,N,i) a[j] = false;	
}
int main()
{
	snt();
    fr("NT2.inp");
	fw("NT2.out");
	cin >> x;
	For(i,1,x,1) { cin >> n ; if(a[n]) s+=n; }
	cout << s;
    return 0;
}