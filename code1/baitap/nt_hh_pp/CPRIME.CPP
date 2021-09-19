#include <bits/stdc++.h>
using namespace std;
bool kt(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i = 2;i <= sqrt(n);i++){
        if(n % i == 0) return false;
    }
    return true;
}
int snt(int n){
    if(kt(n)){
        int s = 0;
        int t = n;
        while(t > 0){
            s = s*10 + (t % 10);
            t /= 10;
        }
        if(kt(s)) return 1;
        else return 0;
    }
    return 0;
}
int main()
{
    freopen("CPRIME.INP","r",stdin);
    freopen("CPRIME.OUT","w",stdout);
    int n;
    cin >> n;
    cout << snt(n);
    return 0;
}
