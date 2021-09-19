#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("CAN2.INP","r",stdin);
	freopen("CAN2.OUT","w",stdout);
	int n;
	cin >> n;
	for(int i = sqrt(n);i>=1;i--)
	{
	   if(n %(i*i) == 0)
	   { 
	   		cout << i << " " <<(n/(i*i));
	   		break;
	   }
	}
	return 0;
}
