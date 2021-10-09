//Tính S(n) = 1 + 1 x 2+ 1x2x3+..xn;
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long n;
    long long g = 1, s = 0;
    cout << "Nhap n = ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
            g *=i;
            s += g;
    }
    cout << "S(n) = " << s;
    return 0;
}
