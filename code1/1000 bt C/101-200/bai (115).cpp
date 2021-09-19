#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    struct hs
       {
           char a [50];
           int  t;
           int  v;
       };
    hs b1; 
    cin >> b1.a >> b1.t >> b1.v;
    float d = (float)(b1.t + b1.v) / 2;
    cout << b1.a << " " << b1.t << " " << b1.v <<endl<<d;
    return 0;
}
