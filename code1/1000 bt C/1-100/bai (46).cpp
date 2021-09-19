#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,i,d = 0;
    do{
        cout << "Nhap n (n >= 1) = ";
        cin >> n;
        if (n < 1) cout << "Nhap sai ! Vui long nhap lai n >= 1\n";
    }while(n < 1);
    while(n > 0){
        i = n %10;
        if (i % 2 != 0) d += 1;
        n = n / 10;
   }
    cout << "So chu so cua n la : " << d;
    return 0 ;
}
