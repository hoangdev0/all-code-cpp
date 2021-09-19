#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    do{
        cout << "Nhap n (n >= 1) = ";
        cin >> n;
        if(n < 1) cout << "Nhap lai n >=1\n";
    }while(n<1);
    int d = 0,t=n;
    while(n != 0){
        n % 10;
        d ++;
        n /= 10;
    }
    cout << "So chu so cua " << t << " la: " << d;
    return 0;
}
