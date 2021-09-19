#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Lap_trinh.inp","r",stdin);
    freopen("Lap_trinh.out","w",stdout);
    int n,mi = 500,d=1,x;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin>>x;
        if(mi>x)
        {
            mi = x;
            d = 1;
            continue;
        }
        if(mi == x) d++;
    }
    cout << mi << "\n" << d;
    return 0;
