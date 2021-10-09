#include <iostream>
#include <math.h>
#define m 100000
using namespace std;
bool kt(int n){
    int s = 0;
    for(int i = 1;i <= n / 2;i++){
        if(n % i == 0) s += i;
    }
    if(s == n) return true;
    return false;
}
int main()
{
    int a[m],n;
    do{
        cout << "Nhap n nguyen duong : ";
        cin >> n;
        if(n < 1 || n >= m) cout << "Nhap lai!n phai nguyen duong\n";
    }while(n < 1 || n >= m);
    for(int i = 1;i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        if(kt(a[i])== true) cout << a[i] << " ";
    }
    return 0;
}
