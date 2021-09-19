#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a,b;
    do{
        cout << "Nhap 2 so thuc a b (a,b != 0) = ";
        cin >> a >> b;
        if(a ==0 || b == 0) cout << "Nhap lai! a,b != 0\n";
    }while(a ==0 || b == 0);
    if(a > 0){
        if(b > 0) cout << "Cung dau!";
        else cout << "Trai dau!";
    }else{
        if(b > 0) cout << "Trai dau!";
        else cout << "Cung dau!";
    }
    return 0;
}
