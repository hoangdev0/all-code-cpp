#include <bits/stdc++.h>
using namespace std;
unsigned long long  a,b,p=1,d;
int s=0;
bool k=false;
int main()
{
	cin >> d >> a >> b;
	for(int i=a;i<=b;) 
	{
		if(i%d==0) 
		{
			p*=i;
			i+=d;
		}else i++;
	}
	while(p>0)
	{
		if(p%10 == 0) s++;
		else break;
		p/=10;
	}
	cout <<s;
    return 0;
}