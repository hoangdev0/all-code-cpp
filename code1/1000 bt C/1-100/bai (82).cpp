#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a,b,c;
    cout << "nhap vao 3 so thuc a b c : ";
    cin >> a >> b >> c;
    double m = a;
    if(m < b) m = b;
    else if(m < c) m = c;
    cout << "So thuc lon nhat trong 3 so " << a << " , " << b << " , " << c << " la : " << m;
    return 0;
}
