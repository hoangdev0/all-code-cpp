#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,s = 0,i;
    do{
        cout << "Nhap n (n >= 0) = ";
        cin >> n;
        if (n < 0) cout << "Nhap sai ! Vui long nhap lai n >= 1\n";
    }while(n < 0);
    while(n > 0){
        i = n %10;
        s = s + i;
        n = n / 10;
   }
    cout << "So chu so cua n la : " << s;
    return 0 ;
}
