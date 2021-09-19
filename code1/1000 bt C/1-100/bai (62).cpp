#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c,d;
    do{
        cout << "Nhap a b(a,b > 0) = ";
        cin >> a >> b;
        if(a <= 0 || b <= 0) cout << "Nhap lai a b > 0";
    }while(a < 1 && b < 1);
     c = a; d = b;
    while(a != b){
        if (a > b) a -= b;
        else b -= a;
    }
    cout << "UCLN cua " << c << " va " << d << " la : " << a;
    return 0;
}
