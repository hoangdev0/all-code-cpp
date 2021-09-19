#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t,n,i,j,d = 0;
    do{
        cout << "Nhap n (n >= 1) = ";
        cin >> n;
        if ( n < 1) cout << "Nhap lai n >= 1\n";
    }while(n < 1);
        t = n;
    while(n > 0){
        i = n %10;
        n /= 10;
    }
    n = t;
    while(n > 0){
        j = n % 10;
        if(j == i) d++;
        n /= 10;
    }
    cout << "So chu so dau cua " << t << " la : " << d;
    return 0;
}
