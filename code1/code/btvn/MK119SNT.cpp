#include <bits/stdc++.h>
#define N 1000005
#define fr(name) freopen(name,"r",stdin);
#define fw(name) freopen(name,"w",stdout);
#define For(value,begin,end,up) for(int value = begin;value <= end;value+=up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
bool a[N];
int n,l,r,t;
void snt()
{
    memset(a,true,N);
    For(i,2,sqrt(N),1)
        For(j,i*i,N,i) a[j] = false;
}
int main()
{
    snt();
    cin >> t;
    For(i,1,t,1)
    {
        cin >>l>>r;
        int d(0);
        For(i,l,r,1) if(a[i]) d++;
        cout << d <<endl;
    }
    return 0;
}