#include<bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name,"r",stdin);
#define fw(name) freopen(name,"w",stdout);
#define For(value,begin,end,up) for(int value = begin;value <= end;value+=up)
// #define elf else if
// typedef unsigned long long ll;
int n,x;
using namespace std;
int main()
{
    fr("GCDMAX.inp");
    fw("GCDMAX.out");
    cin >> n;
    For(i,1,n,1) 
    {
        cin >> x;
        cout << x/2 << endl;
    }
    return 0;
}