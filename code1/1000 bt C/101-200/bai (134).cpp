#include <iostream>
#include <math.h>
#include<limits.h> 
#include<float.h>
#define N 100005
using namespace std;

int main()
{
    float a[N],m=-FLT_MIN;
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i] > m) m = a[i];
    }
    cout << m;
    return 0;
}
