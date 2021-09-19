#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    freopen("DEM_CP.INP","r",stdin);
    freopen("DEM_CP.OUT","w",stdout);
    long long a,b;
    cin >> a >> b;
    long long s = sqrt(b) - trunc(sqrt(a-1));
    cout << s;
    return 0;
}
