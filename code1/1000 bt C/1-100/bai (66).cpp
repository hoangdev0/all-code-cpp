#include <bits/stdc++.h>
#include <math.h>
using namespace std;
bool c(int x, int y){
    return x > y;
}
int main()
{
    int a[100];
    int n,j,tg;
    cin >> n;
    for(int i = 0; i <= n-1; i++) cin >> a[i];
    for (int i = 1;i <= n-1; i++)
        for(j = i + 1; j <= n; j++){
            c(a[i],a[j]);
           /* if(a[i] > a[j]){
              tg = a[i];
              a[i] = a[j];
              a[j] = tg;
            */}
 for(int i = 0; i <= n-1; i++) cout << a[i] << " ";
  /*      sort(a,a+n);
    for(int i = 0; i <= n-1; i++) cout << a[i] << " ";
    cout <<"\n";
        sort(a,a+n,c);
    for(int i = 0; i <= n-1; i++) cout << a[i] << " ";
        */
    return 0;
}
