#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long n;
    do{
        cout << "Nhap so nguyen duong n = ";
        cin >> n;
        if(n < 1) cout << "Nhap lai n > 0 !\n";
    }while(n < 1);
    bool kt = true;
    while(n > 0){
        if((n % 10) % 2 != 0){
            kt = false;
            break;
        }
        n /= 10;
    }

    if(kt == true) cout << "Dung";
    else cout << "Sai";
    return 0;
}
