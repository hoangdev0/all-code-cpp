#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("BMARKET.inp","r",stdin);
    freopen("BMARKET.out","w",stdout);
    int n,y,k;
    cin >> y >> k >> n;
    if(y >= n) cout << -1;
    else{for(n;n>=k;n--){
        if(n%k==0){
            n-=y;
            break;
            }
        }
        if (n <= 0) cout << -1;
        else{
            int i =__gcd(n,k);
            for(i;i<=n;i+=k) cout << i << " ";
        }
    }
    return 0;
}
