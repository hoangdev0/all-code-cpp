#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int s = 0,i = 1,n;
    do{
        cout << "Nhap n nguyen duong : ";
        cin >> n;
        if (n < 1) cout << "Nhap sai! n >= 1\n";
    }while(n < 0);
    while(i < n){
         s += i;
         i += 2;
    }
    cout << "Tong cac so le be hon " << n << " la : " << s;
    return 0;
}
