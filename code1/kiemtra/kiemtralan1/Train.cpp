#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Train.inp","r",stdin);
    freopen("Train.out","w",stdout);
    int k,t,l,d;
    cin >> k >> t;
    l = t / k;
    d = t % k;
    if(l % 2 == 0) cout << d;
    else cout << k-d;
    return 0;
}
