#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("day_xich.inp","r",stdin);
    freopen("day_xich.out","w",stdout);
    double l,r,d,n,i;
    cin >> d >> r >> n;
    cout << (n*(2*(r+d)) - (n-1)*(2*d));
    return 0;
}
