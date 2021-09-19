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
    int s = 1,i=2;
    while(i <= n){
        s += i;
        i++;
    }
    cout << "S(n) = " << s;
    return 0;
}
