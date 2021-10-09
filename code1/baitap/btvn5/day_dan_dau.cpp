#include <bits/stdc++.h>
#define N 100000
using namespace std;
int main()
{
    int a[N],n;
    bool k=true;
    cin>>n;
    for (int i = 1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i = 2 ; i <= n; i ++)
    {
        if(a[i] < 0 && a[i-1] < 0 || a[i] > 0 && a[i-1]>0)
        {
            k = false;
            break;
        }
    }
    if(k == true) cout << "YES";
    else cout << "NO";
    return 0;
}
