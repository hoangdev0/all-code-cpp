#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,m;
    do{
        cout << "Nhap a b(a,b > 0) = ";
        cin >> a >> b;
        if(a <= 0 || b <= 0) cout << "Nhap lai a b > 0";
    }while(a < 1 && b < 1);
     m = a > b ? a : b;
    for(int i = m; i <= (a * b); i++){
        if (i % a == 0 && i % b == 0){
            cout << "BCNN cua " << a << " va " << b << " la : " << i;
            break;
        }
    }
    return 0;
}
