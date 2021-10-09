#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long n,j,k,i = 1;
    do{
        cout << "Nhap so nguyen duong n = ";
        cin >> n;
        if (n < 1) cout << "Nhap lại n > 0\n";
    }while(n < 1);
    k = n % 10;
    n /= 10;
    bool kt = true;
    while(n > 0){
        j = n % 10;
        n /= 10;
        if(j > k){
            kt = false;
            break;
        }
        else k = j;
    }
    if(kt == true) cout << "Dung";
    else cout << "Sai";
    return 0;
}
