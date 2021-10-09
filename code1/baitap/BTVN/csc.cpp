#include <bits/stdc++.h>
#define N 100000
using namespace std;

int main()
{
    freopen("csc.inp","r",stdin);
    freopen("csc.out","w",stdout);
    int n,a[N],d;
    cin >> n;
    bool check = false;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    d=a[2]-a[1];
    for(int i = 2; i<= n;i++)
    {
        if(a[i] == a[1] + (i-1)*d)
        {
            check = true;
        }else
        {
            check = false;
            break;
        }
    }
    if(check) cout << 1;
    else cout << 0;
    return 0;
}
