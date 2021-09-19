#include <bits/stdc++.h>
using namespace std;
bool hh(int n){
    if(n == 6||n==28||n==496||n==8128) return true;
    return false;
}
void thh(int n){
    int s = 0;
    for(int i = 6;i<=n;i+=2){
        if(hh(i)) s+=i;
    }
    cout << s;
}
int main()
{
    freopen("HOAN_HAO.INP","r",stdin);
    freopen("HOAN_HAO.OUT","w",stdout);
    int n;
    cin >> n;
    thh(n);
    return 0;
}
