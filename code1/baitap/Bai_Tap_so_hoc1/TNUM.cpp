#include <bits/stdc++.h>
using namespace std;
bool u(int n){
    int d = 2;
    for(int i = 2;i <= n / 2;i++){
        if(n % i == 0) d++;
    }
    if(d < 3 || d > 3) return false;
    return true;
}
int main()
{
    freopen("TNUM.inp","r",stdin);
    freopen("TNUM.out","w",stdout);
    int n,a;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a;
        if(u(a) == true) cout << "YES"<< endl;
        else cout << "NO"<<endl;
    }
    return 0;
}
