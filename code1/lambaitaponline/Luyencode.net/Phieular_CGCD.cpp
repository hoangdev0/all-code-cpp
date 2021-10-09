#include <bits/stdc++.h>
using namespace std;
int phi(int n)
{
	int s = n;
	cout <<"main : n = " << n << " s = " << s << endl;
	for(int i = 2;i<=sqrt(n);i++)
	{
		cout << "for :i = " << i << "  n = " << n << " s = " << s << endl;
		if(n%i == 0)
		{
			cout << "if (n%i == 0):i = " << i << "  n = " << n << " s = " << s << endl;
			while(n%i==0) {
				cout << "while(n%i==0)i = " << i << "  n = " << n << " s = " << s << endl;
			    n/=i;
			    cout << "while(n%i==0): i = " << i << "(n/=i) n = " << n << " s = " << s << endl;
			}	
			s-=s/i;
			cout << "if(n%i==0): i = " << i << "  n = " << n << " s = " << s << endl;
		}
	}
	if(n!=1) s -= s/n;
	cout << "main:if(n!=1): n = " << n << " s = " << s << endl;
	return s;
}
int main()
{
	int t,n;
	//cin >> t;
	//for(int i = 1;i<=t;i++)
	//{
		//cin >> n;
		cout << phi(155) << endl;
	//}
	return 0;
}