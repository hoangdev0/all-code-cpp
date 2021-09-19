#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    long n,i;
    double s;
    do{
        cout << "Nhap n (n >= 1) = ";
        cin >> n;
        if (n < 1) cout << "Vui long nhap lai n >= 1";
    }while(n < 1);

    i = 2;
    s = 0;
    n += 1;
    while(i <= n){
        s = (double)pow(s + (i - 1),(double) 1/i);
        i++;
    }
    cout << fixed << setprecision(9) << "S(n) = " << s;
    return 0;
}
