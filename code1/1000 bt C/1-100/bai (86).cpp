#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,i = 2, s = 1;
    do{
        cout << "Nhap n (n >= 1) : ";
        cin >> n;
        if(n < 1) cout <<"Nhap lai n >= 1!";
    }while(n < 1);
    while(i <= n){
        s += pow(i,3);
        i++;
    }
    cout << "S(n) = " << s ;
    return 0;
}
