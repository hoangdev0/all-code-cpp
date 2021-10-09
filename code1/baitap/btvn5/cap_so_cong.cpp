#include <bits/stdc++.h>
using namespace std;
int n=1,a[10000];
bool kt = true;
int main()
{
    while(cin >> a[n]) n++;
    int d = a[1] - a[0];
    for(int i = 1; i <= n; i++){
    if(a[i] != a[0]+i*d)
    {
        kt = false;
        break;
    }
    }
    if(kt) cout << "YES";
    else cout << "NO";
    return 0;
}
