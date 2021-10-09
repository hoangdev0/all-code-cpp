#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int hh(int n){
    if (n == 6 || n == 28 || n == 496 || n == 8128) return 1;
    return 0;
}
int main()
{
    freopen("hoan_hao.inp","r",stdin);
    freopen("hoan_hao.out","w",stdout);
    int i = 6,s = 0,n;
    cin >> n;
    while(i <= n){
        if(hh(i) == 1) s += i;
        i += 2;
    }
    cout << s;
    return 0;
}
