#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("EVENODD.INP","r",stdin);
    freopen("EVENODD.OUT","w",stdout);
    int n,x,y;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        if(x % 2 == 0 && y % 2 == 0) cout << "even"<<endl;
        else cout << "odd"<<endl;
    }
    return 0;
}
