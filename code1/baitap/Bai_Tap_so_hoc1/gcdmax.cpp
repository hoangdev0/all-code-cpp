#include <bits/stdc++.h>
using namespace std;
int bc(int n){
    int m = 1;
    for(int i = 1;i <= n - 1; i++){
        for(int j = i+1; j <= n; j++){
            int x = __gcd(i,j);
            if(x > m) m = x;
        }
    }
    return m;
}
int main()
{
    freopen("gcdmax.inp","r",stdin);
    freopen("gcdmax.out","w",stdout);
    int n,t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> n;
        cout << bc(n)<<endl;
    }
    return 0;
}
