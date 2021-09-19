//Tính S(n) = 1 + 1/2+1/3+...+1/n
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,i;
    float s = 1;
    cin >> n;
    for (i = 2; i <= n; i++) s += (float)1 / i;
    cout << s;
    return 0;
}
