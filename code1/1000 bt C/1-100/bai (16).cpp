//S(n)= x + x^2/1+2 + x^3/1+2+3+...+x^n/1+2+..+n
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x,n,t=1;
    cout << "Nhap x n = ";
    cin >> x >> n;
    float s = x;
    for (int i = 2; i <= n; i++){
        t += i;
        s += (float) (pow(x,i))/t;
    }
    cout << "S(n) = " << s;
    return 0;
}
