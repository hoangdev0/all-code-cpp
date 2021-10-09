#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int kt(int n){
    if(n == 6 || n == 28 || n == 496 || n == 8128) return 1;
    return 0;
}
int main()
{
    freopen("sohoanhao.inp","r",stdin);
    freopen("sohoanhao.out","w",stdout);
    int n,i = 1,a[10000];
    cin >> n;
    while(i <= n){
        cin >> a[i];
        if (kt(a[i]) == 1) cout << a[i] << " ";
        i++;
    }
    return 0;
}
