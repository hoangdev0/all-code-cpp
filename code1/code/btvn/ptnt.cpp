#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name,"r",stdin);
#define fw(name) freopen(name,"w",stdout);
#define For(value,begin,end,up) for(int value = begin;value <= end;value+=up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int main()
{
    fr("test.inp");
    fw("test.out");
    int n;
    while(cin >> n)
    {
        cout << n << " : ";
        For(i,2,n,1)
        {
            int d = 0;
            if(n%i==0)
            while(n%i==0)
            {
                d++;
                n/=i;
            }
            if(d>1) cout << i << "^" << d << "*";
            elf(d==1) cout << i << "*";
        }
        cout << endl;
    }
    return 0;
}