#include <bits/stdc++.h>
using namespace std;
void us(int n)
{
    int d = 2;
    for(int i =2;i<=(sqrt(n));i++)
        if(n%i==0) d+=2;
    if(round(sqrt(n))-sqrt(n)==0) d--;
    cout << d << endl;
}
int main()
{
    int n,x;
    cin >> n;
    for(int i = 1;i<=n;i++)
    {
        cin >> x;
        us(x);
    }
    return 0;
}