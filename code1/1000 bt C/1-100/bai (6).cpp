//s= 1/(1 * 2) + 1/(2 * 3) + ... + 1/(n(n+1))
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,i;
    float s = 0;
    cin >> n;
    for (i = 1; i <= n; i++) s += (float)1 / (i*(i + 1));
    cout << s;
    return 0;
}
