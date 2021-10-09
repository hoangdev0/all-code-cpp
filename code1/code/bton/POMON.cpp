#include <bits/stdc++.h>
// #define N 1000005
// #define fr(name) freopen(name,"r",stdin);
// #define fw(name) freopen(name,"w",stdout);
#define For(value,begin,end,up) for(int value = begin;value <= end;value+=up)
// #define elf else if
typedef unsigned long long ll;
using namespace std;
int main()
{
    int t;
    For(i,1,t,1)
    {
        ll n,a;
 	    cin >> n;
        if(n%8 != 0) cout << -1;
        else{
            a = n/8;
            cout << a << " " << 2*a << " " << 5*a;
        }
    }
	return 0;
}