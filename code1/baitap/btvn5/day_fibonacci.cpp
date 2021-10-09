#include <bits/stdc++.h>
using namespace std;
long long fbn(int n)
{
    if(n==0) return 0;
    if(n == 1) return 1;
    long long i = 2,a,b=1,c=1;
    while(i <= n)
    {
        a=b+c;
        b = c;
        c = a;
        i++;
    }
    return a;
}
bool c(int n)
{
     if(n==0) return true;
     for(int i=1;i<=n;i++)
     if(fbn(i)==n) return true;
     return false;
}
int main()
{
    int n,b,d,a[100000];
    cin >> n;
    bool k = true;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    if (c(a[1])==true && c(a[2])==true)
    {
        b = a[1];
        d = a[2];
        for(int i = 3; i <= n ;i++)
        {
            if(a[i] !=b + d)
            {
                k=false;
                break;
            }
            b = d;
            d = a[i];
        }
    }else k = false;
    if(k == true) cout << "YES";
    else cout << "NO";
    return 0;

}
