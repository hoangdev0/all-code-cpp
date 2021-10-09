//S(n) = 1 + x^2/2!+x^4/4!+..+x^2n/(2n)!
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int x, n, g = 1;
    float s = 1;
    cout << "Nhap x n = ";
    cin >> x >> n;
    for(int i = 1; i <= n; i++){
        int t = 2 * i;
        g = g * (t - 1) * t;
        s += (float)(pow(x,2 * i)) / g;
    }
    cout << fixed << setprecision(7) << "S(n) = " << s ;
    return 0;
}
