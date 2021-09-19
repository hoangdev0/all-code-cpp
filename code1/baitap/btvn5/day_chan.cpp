#include <bits/stdc++.h>
#define N 100000
using namespace std;
bool kt(int n)
{
    if(n%2 == 0) return true;
    return false;
}
int main()
{
    int a[N],n;
    bool k=true;
    cin>>n;
    for (int i = 1; i<=n; i++)
    {
        cin>>a[i];
        if(!kt(a[i])) k = false;
    }
    if(k == true) cout << "YES";
    else cout << "NO";
    return 0;
}
