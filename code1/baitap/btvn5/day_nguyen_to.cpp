#include <bits/stdc++.h>
#define N 100000
using namespace std;
bool kt(int n)
{
    if(n < 2) return false;
    if(n == 2) return true;
    for(int i = 3; i <= sqrt(n); i+= 2)
    {
        if (n % i == 0) return false;
    }
    return true;
}
int main()
{
    int a[N],n;
    bool k=false;
    cin>>n;
    for (int i = 1; i<=n; i++)
    {
        cin>>a[i];
        if(kt(a[i])) k = true;
    }
    if(k == true) cout << "YES";
    else cout << "NO";
    return 0;
}
