#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,t=1;
    float s=1;
    cout << "Nhap n = ";
    cin >> n;
    for(int i = 2; i <= n; i++){
        t += i;
        s += (float) 1 / t;
    }
    cout <<"S(n) = " << s;
    return 0;
}
