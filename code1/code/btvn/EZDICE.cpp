#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,d;
    cin >> n >> m >> d;
    if(d%n==0) cout << 1;
    else if(d%m==0) cout << -1;
    else if(d%n!=0 && d%m!=0) cout << 0;
    else {
        if(d*n<d*m) cout << 1;
        else cout << -1;
    }
    return 0;
}