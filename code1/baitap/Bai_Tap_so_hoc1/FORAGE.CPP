#include <bits/stdc++.h>
using namespace std;
void t(int p,int n, int k){
    int s = k*((n+1)*n/2);
    if(s <= p) cout << "YES";
    else{
        cout << "NO" <<"\n"<< s-p;
    }
}
int main()
{
    freopen("FORAGE.INP","r",stdin);
    freopen("FORAGE.OUT","w",stdout);
    int n,p,k;
    cin >> p >> n >> k;
    t(p,n,k);
    return 0;
}
