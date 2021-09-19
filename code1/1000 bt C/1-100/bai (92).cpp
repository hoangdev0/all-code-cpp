#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c,d;
    do{
        cout << "Nhap 2 nguyen duong a b : ";
        cin >> a >> b;
        if (a < 1 || b < 1) cout << "Nhap sai! a,b >= 1\n";
    }while(a < 1 || b < 1);
    c = a; d = b;
    while(a != b){
        if(a > b) a -= b;
        else b -= a;
    }
    cout << "UCLN cua 2 so " << c << " va " << d << " la: " << a;
    return 0;
}
