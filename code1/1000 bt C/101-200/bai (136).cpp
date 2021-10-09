#include <bits/stdc++.h>
using namespace std;
int n,a[100005],t = -1;
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        if(a[i]%2==0)
        {
            t = a[i];
        }
    }
    cout << t;
    return 0;
}
