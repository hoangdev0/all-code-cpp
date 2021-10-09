#include <bits/stdc++.h>

#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)

using namespace std;

bool nt(int n)
{
    For(i, 2, sqrt(n), 1)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int a, b, c, s = 0, x;

int main()
{
    freopen("TIENXU.inp", "r", stdin);
    freopen("TIENXU.out", "w", stdout);

    cin >> a >> b >> c;

    x = (__gcd(a, b));
    if (c % x != 0 || nt(c))
        {cout << -1;}
    else
    {
        bool k = true;
        if (a > b)
            swap(a, b);
        for (int i = c / a; i >= 1; i--)
        {
            if ((c - i * a) % b == 0)
            {
                int j = (c - i * a) / b;
                cout << i + j;
                k = false;
                break;
            }
        }
        if(k==true) cout << -1;
    }
    return 0;
}
