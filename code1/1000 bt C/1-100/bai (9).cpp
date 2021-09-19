//S=1*2*3*..*n;(n!)
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long n;
    long long g = 1;
    cin >> n;
    for(int i = 1; i <= n; i++) g *=i;
    cout << g;
    return 0;
}
