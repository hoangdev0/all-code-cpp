#include <bits/stdc++.h>
#include <math.h>
using namespace std;
void snt(int n)
{
    bool a[n+1];
    memset(a,true,n+1);
    for(int i = 2; i<= sqrt(n); i++)
    {
        if(a[i])
        {
            for(int j = i*i; j <= n; j += i)
            {
                a[j] = false;
            }
        }
    }
    for(int i = 2;i<=n;i++) 
        if(a[i]) cout << i << " ";
}
int main()
{
    int n;
    cin >> n;
    snt(n);
    return 0;
}
