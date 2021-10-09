#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("CAN2.INP","r",stdin);
	freopen("CAN2.OUT","w",stdout);
	int n,s = 1,t;
	cin >> n;
	int i = sqrt(n);
	for(i;i >= 4;i++)
	{
		if(n%i==0)
		{
			if(round(sqrt(n%i))-sqrt(n%i)==0) 
			{
				n /= n%i;
				s = t;
				break; 
			}
		}
	}
	cout << s << " " << n;
	return 0;
}