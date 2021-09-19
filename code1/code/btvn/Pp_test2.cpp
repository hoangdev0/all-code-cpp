#include <bits/stdc++.h>
using namespace std;
#define N 1000001
#define fr(name) freopen(name,"r",stdin);
#define fw(name) freopen(name,"w",stdout);
#define For(value,begin,end,up) for(int value = begin;value <= end;value+=up)
#define elif else if
typedef unsigned long long ll;
int a[N];
void tpp()
{
    memset(a,1,N);
    // a[12]=0;
    For(i,12,N,2)
    {
        int s(1);
        For(j,2,i/2,1)
        if(i%j==0) s+=j;
        if(s>i) a[i] = 0;
    }
}

int main()
{
    spp();
    fr("test.inp");
    fw("test.out");
    int x,y,d(0);
    cin >> x >> y;
    For(i,x,y,1) if(a[i]==0) cout << i << " ";
    //cout << d;
    return 0;
}