#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int cp(int n){
    if(round(sqrt(n)) - sqrt(n) == 0) return 1;
    return 0;
}
int main()
{
    freopen("chinh_phuong.inp","r",stdin);
    freopen("chinh_phuong.out","w",stdout);
    int n;
    cin >> n;
    cout << cp(n);
    return 0;
}
