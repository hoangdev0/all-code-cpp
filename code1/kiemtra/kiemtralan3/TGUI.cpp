#include <bits/stdc++.h>
using namespace std;
int n,m,nam = 1;
int main()
{
    freopen("TGUI.INP","r",stdin);
    freopen("TGUI.OUT","w",stdout);
    cin >> n >> m;
    for(;;)
    {
        if((float)m/n <= (float)pow((1+(float)8.4/100),nam)) break;
        else nam++;
    }
    cout << nam;
    return 0;
}
