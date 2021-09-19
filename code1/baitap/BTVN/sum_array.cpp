#include <bits/stdc++.h>
#define N 1000006
using namespace std;

int main()
{
    freopen("sum_array.inp","r",stdin);
    freopen("sum_array.out","w",stdout);
    int a[N],m = 0,i= 1;
    long long s = 0;
    while(cin >> a[i])
    {
        s += a[i];
        if(a[i] > m)
        {
            m = a[i];
        }
        i++;
    }
    cout << s << "\n" << m << "\n";
    for(int j = 1; j <= i; j++)
        if(a[j] == m) cout << j << " ";
    return 0;
}
