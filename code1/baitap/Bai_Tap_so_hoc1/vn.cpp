#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("vn.inp","r",stdin);
    freopen("vn.out","w",stdout);
    int n,m,a,b;
    cin >> n >> m;
    cout << __gcd(n,m) << endl;
    cout << (n / __gcd(n,m)) << " " << (m / __gcd(n,m));
    return 0;
}
