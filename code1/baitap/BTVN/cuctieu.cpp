#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("cuctieu.inp","r",stdin);
    freopen("cuctieu.out","w",stdout);
    int n,a[100000],d=0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 2; i <= n - 1; i++){
        if(a[i-1] < a[i] && a[i] < a[i+1]) d++;
    }
    cout << d;
    return 0;
}
