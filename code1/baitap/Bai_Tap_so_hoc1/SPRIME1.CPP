#include <bits/stdc++.h>
using namespace std;
bool nt(int n){
    if (n==1)return false;
   for(int i = 2;i <= sqrt(n);i++){
    if (n % i == 0) return false;
   }
   return true;
}
int snt(int n){
    while(n>0){
        if(nt(n/10) == false) return false;
        n /=10;
    }
    return true;
}
void th(int a,int b){
    int d = 0;
    if(a>=b) cout << "NO";
    else{
        for(a;a<=b;a++){
            if(snt(a) == false) continue;
            cout << a<<endl;
            d++;
        }
        if(d==0) cout << "NO";
    }

}
int main()
{
    freopen("SPRIME.INP","r",stdin);
    freopen("SPRIME.OUT","w",stdout);
    int a,b;
    cin >> a >> b;
    th(a,b);
    return 0;
}
