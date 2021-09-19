#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    freopen("T.inp","r",stdin);
    freopen("T.out","w",stdout);
    const int m = 1000;
    int a[m],n,s = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        if (a[i] == 6 || a[i] == 28 || a[i] == 496 || a[i] == 8128) s += 10;
        else s += 1;
    }
    cout << s;
    return 0;
}
