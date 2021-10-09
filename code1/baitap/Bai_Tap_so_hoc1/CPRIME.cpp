#include <bits/stdc++.h>
using namespace std;
bool kt(int n){
    for(int i = 2;i <= sqrt(n);i++){
        if(n % i == 0) return false;
    }
    return true;
}
int nt(int n){
    int s = 0;
    int t = n;
    while(t > 0){
        s = s*10 + (t % 10);
        t /= 10;
    }
    if(kt(n) == 1 && kt(s) == 1) return 1;
    return 0;
}
int main()
{
    freopen("CPRIME.inp","r",stdin);
    freopen("CPRIME.out","w",stdout);
    int n;
    cin >> n;
    cout << nt(n);
    return 0;
}
