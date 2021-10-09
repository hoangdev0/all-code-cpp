#include <bits/stdc++.h>
using namespace std;
const long long N = 1e10+2;
int kt[N];
memset(kt,true,n+1);
void ktsnt(){
       
        kt[1] = false;
        int d = 0;
        for(int i = 2; i <= sqrt(N);i++)
        {
            if(kt[i])
            {
                for(int j = i*i;j<=N;j+=i)
                {
                    kt[j] = false;
                }
            }
        }
        for(int i = 2;i<=N;i++){
           int t = i;
           while(t>0){
            if(!kt[t])
            {
                kt[i] = false;
                break;
            }
            t /= 10;
           }
        }
}
void snt(int n){
        for(int i = 1;i<=pow(10,n);i++)
            if(kt[i]) cout << i << " ";
}
int main()
{
    //freopen("SPRIME.INP","r",stdin);
    //freopen("SPRIME.OUT","w",stdout);
    ktsnt();
    int n;
    cin >> n;
    snt(n);
    return 0;
}
