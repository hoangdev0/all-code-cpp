#include <bits/stdc++.h>
#define N 1000003
using namespace std;
int x, c[N], n;
bool k = false;

int main()
{
    freopen("SOTHUNHI.INP", "r", stdin);
    freopen("SOTHUNHI.OUT", "w", stdout);
    memset(c, N, 0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x < 0 && abs(x) < N)
            c[abs(x)]++;
    }
    for (int i = 1; i <= n + 2; i++)
    {
        if (c[i] == 0)
        {
            if (k == true)
            {
                cout << -i;
                break;
            }
            k = true;
        }
    }
    return 0;
}