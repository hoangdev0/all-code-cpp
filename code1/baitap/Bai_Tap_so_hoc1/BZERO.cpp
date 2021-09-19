#include <bits/stdc++.h>
using namespace std;
void gt(int n){
    int a[100000],m=1,i,j,d = 0;
    long long q,r=0;
    a[0]=1;
    for(int i = 2; i <= n; i++){
        for(j = 0; j <= m; j++){
            q=r;
            r=(a[j]*i+r)/10;
            a[j] = (a[j]*i+q)%10;
        }
        while(r>0){
            a[m] = r % 10;
            m++;
            r /= 10;
        }
    }
    for(int i = 0;i <= m-1;i++)
    if(a[i] == 0) d++;
    else break;
    cout << d;
}
int main()
{
    freopen("BZERO.inp","r",stdin);
    freopen("BZERO.out","w",stdout);
    int n;
    cin >> n;
    gt(n);
    return 0;
}
