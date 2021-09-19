#include <bits/stdc++.h>
using namespace std;
void snt(int n)
{
    bool nt[n+1];
    memset(nt,true,n+1);
    for(int i = 2 ;i<=sqrt(n);i++)
    {
        if(nt[i])
        {
            for(int j =i*i;j<=n;j+=i)
            {
                nt[j] = false;
            }
        }
    }
    for(int i = 2 ; i<=n;i++)
    {
        if (nt[i]) cout << i << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    snt(n);
    return 0;
}
