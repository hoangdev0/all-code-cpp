//Tính T(x,n) = x^n
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,x;
    cout << "Nhap n x : ";
    cin >> n >> x;
    cout <<"T(n,x) = " << pow(n,x);
    return 0;
}
