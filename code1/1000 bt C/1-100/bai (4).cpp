//Tính S(n) = 1/2+1/4+...+1/2n
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,i;
    float s = 0;
    cin >> n;
    for (i = 1; i <= n; i++) s += (float)1 / (2 * i);
    cout << s;
    return 0;
}
