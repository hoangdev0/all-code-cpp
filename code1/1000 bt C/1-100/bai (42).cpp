#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,k = 1,i = 1,s = 0;
    do{
        cout << "Nhap n (n >= 1) = ";
        cin >> n;
        if (n < 1) cout << "Nhap sai! Vui long nhap lai n >= 1\n";
    }while (n < 1);
    while(s + k < n){
        k++;
        s += k;
    }
    cout << "So k lon nhat la : " << k;
    return 0;
}
