#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    freopen("Duong tron.inp","r",stdin);
    freopen("Duong_tron.out","w",stdout);
    int a,b,x,y,r;
    float A;
    cin >> a >> b >> r >> x >> y;
    A = sqrt(pow((x - a),2) + pow((y - b),2));
    if(A == r) cout << "A nam tren (C)";
    else if(A < r) cout << "A nam trong (C)";
    else cout << "A nam ngoai (C)";
    return 0;
}
