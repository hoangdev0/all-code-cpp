#include <bits/stdc++.h>
#define N 1000005
#define fr(name) freopen(name,"r",stdin);
#define fw(name) freopen(name,"w",stdout);
#define For(value,begin,end,up) for(int value = begin;value <= end;value+=up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int a[N];
void hh()
{
    memset(a,0,N);
    For(i,1,N,1) For(j,2*i,N,i) a[j] += i;
}
int main()
{
    hh();
    fr("HH.inp");
    fw("HH.out");
    int x, b,d(0);
    cin >> x>>b;
    if(x%2!=0) x++;
    For(i,x,b,2) if(a[i] == i) d++;
    cout << d;
    return 0;
}