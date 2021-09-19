#include <iostream>
#include <math.h>
using namespace std;
bool kt(int n){
    for(int i = 2;i <= round(sqrt(n)); i++){
        if(n % i == 0) return false;
    }
        return true;
}
int main()
{
    int n;
    do{
        cout << "Nhap n nguyen duong : ";
        cin >> n;
        if (n < 1) cout << "Nhap sai! n >= 1\n";
    }while(n < 0);
    if(kt(n)) cout << n <<" la so nguyen to!";
    else cout << n << " khong phai so nguyen to!";
    return 0;
}
