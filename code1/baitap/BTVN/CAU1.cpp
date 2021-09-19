#include <bits/stdc++.h>
using namespace std;
bool cp(int n){
    if(round(sqrt(n)) - sqrt(n) == 0) return true;
    return false;
}
int main()
{
    freopen("CAU1.inp","r",stdin);
    freopen("CAU1.out","w",stdout);
    int x,y,d=0;
    cin >> x >> y;
    int m = __gcd(x,y);
    if (m == 1) cout << 1;
    else{
        d=2;
        for(int i = 2;i <= sqrt(m); i++)
            if (m % i == 0) d+=2;
        if(cp(m) == true) d -= 1;
        cout << d;
    }
    return 0;
}
