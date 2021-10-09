#include <bits/stdc++.h>
using namespace std;
bool nt(int n)
{
    if(n == 1) return false;
    for(int i = 2; i <= sqrt(n);i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}
bool snt(int n)
{
    while(n>0)
    {
        if(!nt(n)) return false;
        n /= 10;
    }
    return true;
}
int main()
{
    int a,b,n,i;
    cin >> a >> n;
    for(int i = a; i <= n; i++)
    {
        if(snt(i)) cout << i << endl;
    }
    return 0;
}
