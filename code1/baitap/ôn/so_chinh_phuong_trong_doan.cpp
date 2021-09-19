#include <bits/stdc++.h>
using namespace std;
long long scp(long long a,long long b)
{
    return trunc(sqrt(b)) - trunc(sqrt(a-1));
}
int main()
{
    long long a,b;
    cin >> a >> b;
    cout << scp(a,b);
    return 0;
}
