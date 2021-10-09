//S(n)= x^3+x^5+..+x^2n+1;
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long n,x;
    cout << "Nhap x n= ";
    cin >> x >> n;
    double s = 0;
    for(int i = 1; i <= n; i++) s += pow(x,(2 * i) +1) ;
    cout << "S(n) = " << s ;
    return 0;
}
