#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    long n,i;
    double s;
    do{
        cout << "Nhap n (n >= 2) = ";
        cin >> n;
        if (n < 2) cout << "Vui long nhap lai n >= 2";
    }while(n < 2);

    i = 3;
    s = (double)pow(2,(double)1 / 2);
    while(i <= n){
        s = (double)pow(s + i,(double) 1/i);
        i++;
    }
    cout << fixed << setprecision(9) << "S(n) = " << s;
    return 0;
}
