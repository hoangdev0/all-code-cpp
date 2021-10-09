#include <iostream>
#include <math.h>
#define m 100000
using namespace std;

int main()
{
    int a[m],n,i = 1;
    do{
        cout << "Nhap n(1 <= n < 10^6) : ";
        cin >> n;
        if (n < 1||n >= m) cout << "Nhap lai 1 <= n < 10^6\n";
    }while(n < 1||n >= m);
    while(i <= n) {
        cin >> a[i];
        i++;
        };
        i = 1;
    while(i <= n){
        if(round(sqrt(a[i]))-sqrt(a[i]) == 0) cout << a[i] << " ";
        i++;
    }
    return 0;
}
