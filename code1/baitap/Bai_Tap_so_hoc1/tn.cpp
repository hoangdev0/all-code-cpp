#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int lcm(int x,int y){
    return (x * y / __gcd(x,y));
}
int main()
{
    freopen("tn.inp","r",stdin);
    freopen("tn.out","w",stdout);
    int n,bc,a[100];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        bc = lcm(a[i],a[i-1]);
    }
    cout << bc << "\n";
    for(int i = 1; i <= n; i++){
        cout << bc/a[i] << " ";
    }
    return 0;
}
