#include <bits/stdc++.h>
using namespace std;
int  a,b,p=1,d=0;
bool k=false;
int main()
{
	cin >> d >> a >> b;
	for(int i=a;i<=b;i++) 
	{
		if(i%d==0) p*=i;
	}
	while(p>0)
	{
		if(k==false)if(p%10 == 0) d++;
		else k = true;
		p/=10;
	}
	cout <<d;
    return 0;
}