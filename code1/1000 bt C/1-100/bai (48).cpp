/*#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,i,s = 0;
    do{
        cout << "Nhap n (n >= 1) = ";
        cin >> n;
        if (n < 1) cout << "Nhap sai ! Vui long nhap lai n >= 1\n";
    }while(n < 1);
    if(n % 2 == 1){
            s = 1
    while(n > 0){
        i = n % 10;
        if (i % 2 != 0)  s *= i;
        n = n / 10;
   }
   }
    cout << "So chu so cua n la : " << s;
    return 0 ;
}
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,s = 0;
    do{
        cout << "Nhap n (n >= 1) = ";
        cin >> n;
        if (n < 1) cout << "Nhap sai ! Vui long nhap lai n >= 1\n";
    }while(n < 1);
    if(n % 2 == 1){
            s = 1;
    while(n != 0){
        if (n % 2 == 1) s *= (n % 10);
        n = n / 10;
   }
   }
    cout << "So chu so cua n la : " << s;
    return 0 ;
}
