#include <bits/stdc++.h>
using namespace std;
int n,a[100005],t=-1;
bool k = true;
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        if(k==true&& a[i]%2==0)
        {
            t = i;
            k = false;
        }
    }
    cout << t;
    return 0;
}
