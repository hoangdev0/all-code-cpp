#include <bits/stdc++.h>
#define N 1000001
using namespace std;

int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    int c[N],n,x;
    cin >> n;
    for(int i = 1; i <= n;i++)
    {
        cin>>x;
        if(x<=N) c[x]++;
    }
    for(int i = 0;i<=n;i++)
    {
        if(c[i]==0)
        {
            cout << i;
            break;
        }
    }
    return 0;
}
