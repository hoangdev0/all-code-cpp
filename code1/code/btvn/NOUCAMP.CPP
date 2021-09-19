#include<bits/stdc++.h>
using namespace std;
#define N 400005
int n,m,x;
bool a[N];
int main()
{
    freopen("NOUCAMP.inp","r",stdin);
    freopen("NOUCAMP.out","w",stdout);
    cin >> n >> m;
    memset(a,true,n+1);
    for(int i = 1;i<=m;i++)
    {
        cin >> x;
        a[x] = false;
    }
    if(count(a+1,a+n+1,false) == n) cout << -1;
    else{
        for(int i = 1;i<=n;i++)
        {
            if(a[i]) cout << i << " ";
        }
    }
    return 0;
}