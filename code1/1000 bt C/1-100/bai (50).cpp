#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,t,d = 0,i;
    do{
        cout << "Nhap n (n >= 1) = ";
        cin >> n;
        if (n < 1) cout << "Nhap sai ! Vui long nhap lai n >= 1\n";
    }while(n < 1);
    t = n;
    while(n > 0){
        i = n %10;
        d = d * 10 + i;
        n = n / 10;
   }
    cout << "So chu so cua " << t << " la : " << d;
    return 0 ;
}
