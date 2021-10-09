#include <bits/stdc++.h>
using namespace std;
void shh(long long a,long long n)
{
    long long d = 0;
    bool nt[n+1];
    memset(nt,false,n+1);
    for(long long i = 2 ;i <= sqrt(n);i++)
    {
        if(!nt[i])
        {
            for(long long j = i*i; j <= n; j*=j)
            {
            nt[j] = true;
            if(j >= a) d++;
            }
        }
    }
    cout << d;
}

int main()
{

    //freopen("DEM_CP.INP","r",stdin);
    //freopen("DEM_CP.OUT","w",stdout);
    long long a,b;
    cin >> a >> b;
    shh(a,b);
    return 0;
}
