#include<iostream>
using namespace std;
int main()
{
    int s=0,x,n;
    cin >> n;
    for(int i = 1;i<=n;i++)
    {
        cin >> x;
        if(x == 1) s+=1;
        else s-=1;
    }
    cout << abs(s);
    return 0;
}