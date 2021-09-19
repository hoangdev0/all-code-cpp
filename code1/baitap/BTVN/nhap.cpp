#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    freopen("tien_xu.inp","r",stdin);
    freopen("tien_xu.out","w",stdout);
    int a,b,c,j,t,m = 0,d = 0;
    cin >> a >> b >> c;
    if(a > b){
        t=a;
        a=b;
        b=a;
    }
    for(int i = 1; i <= c/a; i++){
        if((c - i * a) % b == 0){
        j = (c - i * a) / b;
            if(i*a + j*b == c) {
                if(i+j>m){
                    m = j+i;
                    d ++;
                }
            }
        }
    }
    if(d > 0) cout << m;
    else cout << "-1";
    return 0;
}
