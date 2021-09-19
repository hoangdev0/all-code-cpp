#include <bits/stdc++.h>
using namespace std;
/*int fb(int n)
{
    if(n == 1 || n == 2) return 1;
    return fb(n-1) + fb(n-2);
}*/
long long fbn(int n)
{
    if(n == 1 || n == 2) return 1;
    long long i = 3,a,b=1,c=1;
    while(i <= n)
    {
        a=b+c;
        b = c;
        c = a;
        i++;
    }
    return a;
}
int main()
{
    int n;
    cin >> n;
    cout << fbn(n);
    return 0;
}
