#include <bits/stdc++.h>
using namespace std;
bool check(long long n)
{
    if(n == 6 || n == 28 || n == 496 || n == 8128 || n == 33550336) return true;
    else if(n==8589869056) return true;
    return false;
}
int main()
{
    freopen("cs_hh.inp","r",stdin);
    freopen("cs_hh.out","w",stdout);
    int n,d = 0;
    long long x;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        if (check(x)){ d++;
        cout << x <<"\n";}

    }
    cout << d;
    return 0;
}
