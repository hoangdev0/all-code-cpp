#include <bits/stdc++.h>
using namespace std;
int n,a[100005],t;
bool k (int n)
{
    if(n == 6||n==28||n==496||n==8128) return true;
    return false;
}
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        if(k(a[i]))
        {
            t = a[i];
        }
    }
    if(k==true) cout <<-1;
    else cout << t;
    return 0;
}
