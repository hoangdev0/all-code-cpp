//Tính S(n) = 1/3+1/5+...+1/2n+1
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,i;
    float s = 1;
    cin >> n;
    for (i = 1; i <= n; i++) s += (float)1 / (2 * i + 1);
    cout << s;
    return 0;
}
