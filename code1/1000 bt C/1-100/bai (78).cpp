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
    int i = 1;
    while(i <= n/2){
        if(n % i == 0) cout << i << " ";
        i++;
    }
    return 0;
}
