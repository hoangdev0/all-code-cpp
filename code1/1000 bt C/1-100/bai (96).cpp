#include <iostream>
#include <math.h>
using namespace std;
float tinh(int x){
    float k;
    if(x >= 5){
        k = 2*x*x + 5 * x + 9;
    }else k = -2*x*x + 4 * x - 9;
    return k;
}
int main()
{
    float x,k;
    cin >> x;
    k = tinh(x);
    cout << k;
    return 0;
}
