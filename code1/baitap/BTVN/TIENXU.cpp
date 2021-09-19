#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    freopen("TIENXU.inp","r",stdin);
    freopen("TIENXU.out","w",stdout);
    int a,b,c;
    cin >> a >> b >> c;
    if(c%__gcd(a,b)) cout << -1;
    {
        if(a>b) swap(a,b);
        for(int i = c/a;i>=1;i--)
            for(int j = 0;i<=c/b;j++;) 
                if(i*a+j*b==c) 
                {
                    cout << i+j;
                    break;
                }
    }
    return 0;
}
