#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    long n,i,g = 1;
    double s;
    cout << "Nhap n (n>=1) = ";
    cin >> n;
    i = 1;
    s = 0;
    while (i <= n){
        g *= i;
        s = (double)pow(s + g,(double) 1 / (i + 1));
        i++;
    }
    cout << fixed << setprecision(9) << "S(n) = " << s ;
    return 0;
}
