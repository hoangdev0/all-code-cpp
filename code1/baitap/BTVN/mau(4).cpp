#include <bits/stdc++.h>
#define ll LONG_LONG_MAX
using namespace std;
bool nt(int n)
{
    for(int i = 2; i <= sqrt(n);i++)
    {
        if(n%i == 0) return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    long long s = pow(2,n-1)*(pow(2,n)-1);
    cout << s;
    return 0;
}
