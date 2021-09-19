#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t,n,i;
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
    cout << "Chu so dau cua " << t << " la : " << i;
    return 0;
}
