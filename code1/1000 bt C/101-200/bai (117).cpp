#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long n,s = 0,x;
    cin >> x >> n;
    long long t = 1;
    for(int i = 1; i <= n;i++)
    {
        t *= x;
        s += t;
    }
    cout << s;
    return 0;
}
