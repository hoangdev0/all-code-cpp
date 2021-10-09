#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("CD.inp","r",stdin);
    freopen("CD.out","w",stdout);
    int l,n,s,d;
    float t =0 ;
    cin >> n >> l >> s;
    d = n*l + (n-1);
    while(d > 0){
        if(s %13 == 0){
            d -= (s-1);
            t++;
        }else{
            if(s >= d){
                d -= d;
                t++;
                break;
            }
            d -= s;
            t++;
        }
    }
    cout << t;
    return 0;
}
