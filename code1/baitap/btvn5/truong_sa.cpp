#include <bits/stdc++.h>
using namespace std;
int main()
{
    struct td
    {
        int x;
        int y;
    };
    td a[1005];
    int n,kc = 0,vt = 0;;
    cin >> n;
    float m =0,mx[1006];
    for(int i = 1;i <= n; i++)
    {
        cin >> a[i].x >> a[i].y;
    }
    for(int i = 1; i <= n; i++)
    {
        m = 0;
        for(int j = 1;j <= n; j++)
        {
            kc = sqrt(pow(a[j].x-a[i].x,2)+pow(a[j].y-a[i].y,2));
            if(kc>m) m = kc;
            mx[i] = m;
        }
    }
    float mi = 1000000;
    for(int i = 1; i <= n;i++)
    {
        if(mx[i] < mi)
        {
            mi = mx[i];
            vt = i;
        }
    }
    cout << vt << "\n" << a[vt].x << " " << a[vt].y;
    return 0;
}
