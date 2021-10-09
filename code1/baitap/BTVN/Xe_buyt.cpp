#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    freopen("Xe_buyt.inp","r",stdin);
    freopen("Xe_buyt.out","w",stdout);
    int b,c,m,n,x,y,z,t,s;
    float a[1000],d;
    cin >> n >> m;
    for(int i = 1; i <= n;i++){
        cin >> a[i];
    }
    cin >> x >> y >> z >> t;
    cin >> b >> c;
    d = fabs(a[b] - a[c]);
    if(d < (float)m / 4){
        s = x;
    }else if(d < (float)m / 3){
        s = y;
    }else if(d < (float)m / 2){
        s = z;
    }else{
        s = t;
    }
    cout << s;
    return 0;
}
