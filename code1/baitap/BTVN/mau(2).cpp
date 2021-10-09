#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    int n;
    cin >> n;
    int d =2;
    for(int i = 2;i <= sqrt(n); i++){
        if(n%i==0) d+=2;
    }
    if(round(sqrt(n))-sqrt(n) == 0) d--;
    cout << d;
    return 0;
}
