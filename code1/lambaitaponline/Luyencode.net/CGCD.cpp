#include <bits/stdc++.h>
using namespace std;
int phi(int n)
{
	int s = n;
	for(int i = 2;i<=sqrt(n);i++)
	{
		if(n%i == 0)
		{
			while(n%i==0) {
			    n/=i;
			}
			s-=s/i;
		}
	}
	if(n!=1) s -= s/n;
	return s;
}
int main()
{
	int t,n;
	cin >> t;
	for(int i = 1;i<=t;i++)
	{
		cin >> n;
		cout << phi(n) << endl;
	}
	return 0;
}