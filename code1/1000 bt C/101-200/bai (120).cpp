#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 2;i <= sqrt(n);i++)
    {
        cout << i*i << " ";
    }
    return 0;
}
