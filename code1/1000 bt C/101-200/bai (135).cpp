#include <bits/stdc++.h>
using namespace std;
int n,a[100005],t;
bool k = true;
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        if(k==true&& a[i]>0)
        {
            t = a[i];
            k = false;
        }
    }
    if(k==true) cout <<-1;
    else cout << t;
    return 0;
}
