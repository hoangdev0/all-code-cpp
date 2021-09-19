#include <iostream>
#include <math.h>
#include <limits>
#define N 100005
using namespace std;
int ma = INT_MIN,mi=INT_MAX,n,x;
int main()
{
    cin >> n;
    for(int i = 1;i<=n;i++)
    {
        cin>>x;
        if(x>ma) ma = x;
        else if(x<mi) mi = x;
    }
    return 0;
}
