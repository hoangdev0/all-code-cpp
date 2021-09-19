//S(n)= x+x^2+x^3+x^4+..+x^n;
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long n,x;
    cout << "Nhap x n= ";
    cin >> x >> n;
    double s = 0;
    for(int i = 1; i <= n; i++) s += pow(x,i);
    cout << "S(n) = " << s ;
    return 0;
}
