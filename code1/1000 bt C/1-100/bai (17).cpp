//S(n) = x + x^2/2!+x^3/3!+..+x^n/n!
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long x,n,g = 1;
    cin >> x >> n;
    double s = x;
    for(int i = 2; i <= n; i++){
        g *= i;
        s += (pow(x,i)/g);
    }
    cout << "S(n) = " << s;
    return 0;
}
