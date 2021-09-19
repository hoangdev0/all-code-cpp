#include <bits/stdc++.h>
using namespace std;
int n,a[100000];
bool kt = true;
int main()
{
    cin>>n;
    for(int i=1; i <= n; i++) cin >> a[i];
    //float d = (float)a[2] / a[1];
    float s;
    for(int i = 2; i <= n; i++){
    s = (float) a[2] / a[1];
    if(a[i-1]*s != a[i])
    {
        kt = false;
        break;
    }
    }
    if(kt == true) cout << "YES";
    else cout << "NO";
    return 0;
}
