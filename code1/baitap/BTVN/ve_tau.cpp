#include <bits/stdc++.h>
#include <math.h>
#define m 100000
using namespace std;

int main()
{
    freopen("ve_tau.inp","r",stdin);
    freopen("ve_tau.out","w",stdout);
    int a[m],n,s,i=1;
    cin >> n;
    while(i <= n) {
        cin >> a[i];
        i++;
    }
    s = 0;
    i = 1;
    while(i <= n) {
        cout << s << endl;
        s += a[i];
        i++;
    }
    return 0;
}
