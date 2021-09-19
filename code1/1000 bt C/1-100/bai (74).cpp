#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x,n,i = 1,g = 1,t;
    do{
        cout << "Nhap x n (x,n > 0) = ";
        cin >> x >> n;
        if(x < 1 || n < 1) cout << "Nhap lai x, n > 0!\n";
    }while(x < 0 && n < 0);
    double s = 1 - x;
    while (i <= n){
        t = 2 * i + 1;
        g = g * (t - 1) * t;
        s += (pow(-1,i + 1) * ((double)pow(x,2 * i + 1) / g));
        i++;
    }
    cout << "S(x,n) = " << s;
    return 0;
}
