#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Cuc_tieu.inp","r",stdin);
    freopen("Cuc_tieu.out","w",stdout);
    int n,x,y,z,d=0;
    cin >> n;
    cin >> z;
    cin >> y;
    for(int i = 3; i <= n; i++)
    {
        cin >> x;
        if(z > y && x > y)
        {
            d++;
        }
        z=y;
        y=x;
    }
    cout << d;
    return 0;
}
