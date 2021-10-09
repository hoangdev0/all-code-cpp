//
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,i = 1;
    float s = 0;
    cin >> n;
    while(n >= i){
        s = (float)sqrt(n + s);
        n--;
    }
    cout << s;
    return 0;
}
