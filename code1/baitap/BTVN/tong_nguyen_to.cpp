#include <bits/stdc++.h>
using namespace std;
int kt(int n){
    for(int i = 2;i<=(float)sqrt(n);i++){
        if(n%i == 0) return 1;
    }
    return 0;
    }
int main()
{
    freopen("tong_nguyen_to.inp","r",stdin);
    freopen("tong_nguyen_to.out","w",stdout);
    int n,s=0;
    cin >> n;
    for(int i = 2; i <= n/2; i++){
        if(kt(i) == 0 && kt(n-i) == 0) s++;
    }
    cout << s;
    return 0;
}
