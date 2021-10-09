//S(n) = 1 + x^3/3!+x^5/4!+..+x^2n/(2n)!
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long x,n,g = 1;
    double s = 1;
    cout << "Nhap x n = ";
    cin >> x >> n;
    for (int i = 1; i <= n; i++){
        int t = 2 * i + 1;
        g = g * (t -1) * t;
        s += (pow(x,2 * i + 1)) / g;
    }
    cout << "S(n) = " << s ;
    return 0;
}
