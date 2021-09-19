#include <bits/stdc++.h>
#include <limits>
using namespace std;
int n,a[100005],t=INT_MAX;
bool k=true;
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        if(a[i]<t&& a[i]>0)
        {
            t = a[i];
            k = false;
        }
    }
    if(k==true) cout <<-1;
    else cout << t;
    return 0;
}
