#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int n;
    double s = 1;
    do{
        cout << "Nhap n(n >= 1) = ";
        cin >> n;
        if (n < 1) cout << "n < 1 vui long nhap lai n >= 1 !\n";
    }while(n < 1);
    int i = 1;
    while(i <= n){
        s = (double) 1 + (1 / (1 + s));
        i++;
    }
    cout << fixed << setprecision(9) << "S(n) = " << s;
    return 0;
}
