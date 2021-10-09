#include <bits/stdc++.h>
using namespace std;
int x, y, d = 2;
int main()
{

    freopen("CHIA_QUA.INP", "r", stdin);
    freopen("CHIA_QUA.OUT", "w", stdout);
    cin >> x >> y;
    int gcd = __gcd(x, y);
    for (int i = 2; i <= sqrt(gcd); i++)
    {
        if (gcd % i == 0)
            d += 2;
    }
    if (round(sqrt(gcd)) - sqrt(gcd) == 0)
        d--;
    cout << d;
    return 0;
}