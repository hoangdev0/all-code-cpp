#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x,n,i = 2,g = 1;;
    do{
        cout << "Nhap n (n > 0) = ";
        cin >> n;
        if( n < 1) cout << "Nhap lai x, n > 0!\n";
    }while(n < 0);
    double s = 1;
    while (i <= n){
           g += i;
        s += (pow(-1,i + 1) * (double)1 / g );
        i++;
    }
    cout << "S(n) = " << s;
    return 0;
}
