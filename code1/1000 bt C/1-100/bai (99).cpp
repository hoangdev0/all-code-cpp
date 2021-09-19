#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a,b,c,t;
    cin >> a >> b >> c;
    if (a > b){
        t = a;
        a = b;
        b = t;
    }
    if (a > c){
        t = a;
        a = c;
        c = t;
    }
    if (b > c){
        t = b;
        b = c;
        c = t;
    }
    cout << "3 so sau khi sap xep: " << a << " " << b << " " << c;
    return 0;
}
