//S= 1/2 + 3/4 +...+ 2n+1/2n+2
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,i;
    float s = 0;
    cin >> n;
    for (i = 0; i <= n; i++) s += (float)((2 * i) + 1) / ((2 * i) + 2);
    cout << s;
    return 0;
}
