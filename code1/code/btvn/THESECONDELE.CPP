#include <bits/stdc++.h>
using namespace std;
#define N 1000005
int x,n,a[N];
int main()
{
    freopen("THESECONDELE.INP","r",stdin);
    freopen("THESECONDELE.OUT","w",stdout);
    cin >> n;
    for(int i = 1;i<=n;i++) cin >> a[i];
    // sort(a+1,a+n+1);
    // cout << a[n-1];
    for(int i = 1;i<=2;i++)
        for(int j=i+1;j<=n;j++)
            if(a[j]>a[i]) swap(a[i],a[j]);
    cout << a[2];
    return 0;
}