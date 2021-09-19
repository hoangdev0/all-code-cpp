#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    long x,n,i;
    do{
        cout << "Nhap x n (x,n >= 1) = ";
        cin >> x >> n;
        if(n < 1 || x < 1) cout << "Nhap lai x,n >= 1";
    }while (n <= 1 && x <= 1);
    double s = (double)sqrt(x);
    i = 2;
    while(i <= n){
        s = (double)sqrt(s + pow(x,i));
        i++;
    }
    cout << fixed << setprecision(9) << "S = " << s;
    return 0;
}
