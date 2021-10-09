#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long n,t,m,i,d = 0;
    do{
        cout << "Nhap n (n >= 1) = ";
        cin >> n;
        if (n < 1) cout << "Nhap sai ! Vui long nhap lai n >= 1\n";
    }while(n < 1);
    t = n;
    m = n % 10;
    while(n > 0){
        i = n %10;
        if (m < i){
            m = i;
            d = 0;
            };
        if (m == i) d ++;
        n = n / 10;
   }
    cout << "So chu so lon nhat cua " << t << " la : " << d;
    return 0 ;
}
