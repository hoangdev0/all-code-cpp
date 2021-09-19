#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("bai2.inp","r",stdin);
    freopen("bai2.out","w",stdout);
    float n,i = 1,d = 0,x;
    cin >> n;
    while(i <= n ){
        cin >> x;
        if (x==10) d++;
        i++;
    }
    cout << d;
    return 0;
}
