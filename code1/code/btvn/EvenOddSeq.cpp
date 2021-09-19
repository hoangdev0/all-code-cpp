#include <bits/stdc++.h>
using namespace std;
#define N 100005
int a[N],t,n,x;
int main()
{
    freopen("EvenOddSeq.inp","r",stdin);
    freopen("EvenOddSeq.out","w",stdout);
    cin >> t;
    for(int i = 1;i<=t;i++)
    {
        memset(a,0,N);
        cin >> n;
        for(int j =1;j<=n;j++) 
        {
            cin >>a[j];
        }
        sort(a+1,a+n+1);
        for(int j=1;j<=n;j++)
        {
            if(a[j]%2==0) cout << a[j] << " ";
        }
        for(int j=1;j<=n;j++)
        {
            if(a[j]%2!=0) cout << a[j] << " ";
        }
        cout << endl;  
    }
    return 0;
}