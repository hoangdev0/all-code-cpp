//Tính S(n) = 12 + 22 + 32 + … + n2.
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long n,i,s = 0;
    cin >> n;
    for (i = 1; i <= n; i++) s += (i * i);
    cout << s;
    return 0;
}
