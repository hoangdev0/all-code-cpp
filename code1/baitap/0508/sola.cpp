#include <bits/stdc++.h>
#define N 10001
#define M 2001
using namespace std;
int main()
{
   freopen("sola.inp","r",stdin);
   freopen("sola.out","w",stdout);
   int n,mi=0,ma=M,c[M],x,a[N];
   cin >> n;
   fill(c,c+M+1,0);
   for(int i = 1;i <=n;i++)
   {
      cin >> x;
      x = a[i];
      x+=1000;
      c[x]++;
   }
   for(int i = mi;i<=M-1;i++)
   {
      if(c[i] == 1) 
      {
         cout << i-1000 << " ";
         x = i-1000;
         break;
      }
   }
   for(int i = 1;i<=n;i++)
   {
      if(x == a[i]) 
      {
         cout << i;
         break;
      }
   }
   return 0;
}