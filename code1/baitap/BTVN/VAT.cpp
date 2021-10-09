#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("VAT.inp","r",stdin);
    freopen("VAT.out","w",stdout);
    unsigned int n;
    cin >> n;
    cout << fixed << setprecision(2) << (float)(n / 1.1) << " " << (float)(n - n / 1.1);
    return 0;
}
