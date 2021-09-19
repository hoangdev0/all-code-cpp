#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,t,m,i;
    do{
        cout << "Nhap n (n >= 1) = ";
        cin >> n;
        if (n < 1) cout << "Nhap sai ! Vui long nhap lai n >= 1\n";
    }while(n < 1);
    t = n;
    m = n % 10;
    while(n > 0){
        i = n %10;
        if (m > i) m = i;
        n = n / 10;
   }
    cout << "Chu so nho nhat cua " << t << " la : " << m;
    return 0 ;
}
