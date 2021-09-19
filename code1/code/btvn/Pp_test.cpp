#include <bits/stdc++.h>
using namespace std;
#define N 1000001
#define fr(name) freopen(name,"r",stdin);
#define fw(name) freopen(name,"w",stdout);
#define For(value,begin,end,up) for(int value = begin;value <= end;value+=up)
// #define elif else if
// typedef unsigned long long ll;
int a[N];
void spp()
{
    For(i,1,N,1)
        For(j,2*i,N,i) a[j] += i;
}

int main()
{
    spp();
    fr("PhongPhu.inp");
    fw("PhongPhu.out");
    int x,y,d(0);
    cin >> x >> y;
    For(i,x,y,1) if(a[i] > i) d++;
    cout << d;
    return 0;
}