#include <bits/stdc++.h>
using namespace std;
bool k(long long n){
    for(long long i = 2; i*i<= n;i++)
        if (n%i == 0) return false;
    return true;
}
long long gt(int n){
    if(n == 1) return 1;
    return n * gt(n-1);
}
int main()
{
    freopen("analyse.inp","r",stdin);
    freopen("analyse.out","w",stdout);
    int n,d,m;
    cin >> n;
    m = gt(n);
    for(long long i = 2; i <= m; i++){
        d = 0;
        if(k(i) ){
        while(m % i == 0){
            d++;
            m /= i;
        }
        cout << d << " ";
    }
    }
    return 0;
}
