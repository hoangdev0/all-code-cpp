#include <bits/stdc++.h>
using namespace std;
int main()
{
// 	freopen("MaxPositive.inp","r",stdin);
// 	freopen("MaxPositive.out","w",stdout);
	int t,n=1;
	double s,x;
	cin >> t;
	for(int j = 1;j<=t;j++)
	{
		cin >> x;
		s = 1;
		double i = 2;
		//for(i;s+1/(2*i-1)<x;s+=1/(2*i-1),i++);
		while(s+(1/(2*i-1))<x)
		{
			s+=(1/(2*i-1));
			i++;
		}
		cout << (int)i-1 << endl;
	}
	return 0;
}