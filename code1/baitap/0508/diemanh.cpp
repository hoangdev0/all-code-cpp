#include<bits/stdc++.h>
#define N 1000000
using namespace std;
int n ,x,c[N],m = -1,ma=-1;
int main()
{
   freopen ("diemanh.inp", "r", stdin);
   freopen ("diemanh.out", "w", stdout);
   fill(c,c+N,0);
   cin >> n;
   for(int i = 0; i<=n-1;i++)
   {
      cin >> x;
      c[x-1] ++;
      if(m < x) m = x;
   }
   for(int i = 0; i<=m-1;i++)
   {
      if (ma < c[i]) ma = c[i];
   }
   cout << ma;
   return 0;
}