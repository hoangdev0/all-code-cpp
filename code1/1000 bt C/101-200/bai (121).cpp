#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int sochuso(int n)
{
    int d = 0;
    while(n>0)
    {
        n/=10;
        d++;
    }
    return d;
}
bool kt(int n)
{
    int s = 0, c,m=sochuso(n),x=n;
    while(n > 0)
    {
        int t = n%10;
        c = (float)pow(t,m);
        n/=10;
        cout << s << " + ";
        cout << pow(t,m) << " = ";
        s += c;
        cout << s << endl;
    }
    if(s==x) return true;
    return false;
}
int main()
{
    // int n = 1000000;
    // for(int i = 1; i<=n;i++)
    // if(kt(i)) cout << i << " ";
    kt(153);
    return 0;
}
