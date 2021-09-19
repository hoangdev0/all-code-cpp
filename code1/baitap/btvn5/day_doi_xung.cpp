#include <bits/stdc++.h>
#define N 100000
using namespace std;
int main()
{
    int a[N],n;
    cin >> n;
    bool kt = true;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int j=n;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != a[j])
        {
            kt = false;
            break;
        };
        j--;
    }
    if(kt == true) cout << "YES";
    else cout << "NO";
    return 0;
}
