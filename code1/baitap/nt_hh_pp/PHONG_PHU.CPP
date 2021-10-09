#include <bits/stdc++.h>
using namespace std;
bool pp(int n){
    int s = 0;
    for(int i = 2; i<=n/2;i++){
        if(n%i == 0) s+= i;
    }
    if(s>n) return true;
    return false;
}
void tpp(int a,int b){
    int l =  a < 12 ? l = 12 : l = a;
    int d = 0;
    for(l;l<=b;l++){
        if(pp(l)) d++;
    }
    cout << d;
}
int main()
{
    freopen("PHONG_PHU.INP","r",stdin);
    freopen("PHONG_PHU.OUT","w",stdout);
    int a,b;
    cin>> a >> b;
    tpp(a,b);
    return 0;
}
