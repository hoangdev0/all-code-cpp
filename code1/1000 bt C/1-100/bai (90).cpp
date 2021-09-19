#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int s = 0,i = 1,n,m = 0;
    do{
        cout << "Nhap n nguyen duong : ";
        cin >> n;
        if (n < 1) cout << "Nhap sai! n >= 1\n";
    }while(n < 0);
    while(s + m + 1 < n){
        m++;
        s += m;
    }
    cout <<"m = " << m << endl;
    cout << "Tong la : " << s;
    return 0;
}
