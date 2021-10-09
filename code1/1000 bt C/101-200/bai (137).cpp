#include <bits/stdc++.h>
#include <limits>
using namespace std;
int n,a[100005],t,m=INT_MAX;
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        if(a[i]<m) 
        {
            t = i;
            m = a[i];
        }

    }
    cout << t;
    return 0;
}
