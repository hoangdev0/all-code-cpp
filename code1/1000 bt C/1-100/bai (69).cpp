#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x,n,i = 2;
    do{
        cout << "Nhap x n (x,n > 0) = ";
        cin >> x >> n;
        if(x < 1 || n < 1) cout << "Nhap lai x, n > 0!\n";
    }while(x < 0 && n < 0);
    double s = -pow(x,2);
    while (i <= n){
        s += (pow(-1,i) * pow(x,2*i));
        i++;
    }
    cout << "S(n) = " << s;
    return 0;
}
