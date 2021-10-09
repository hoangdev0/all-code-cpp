#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,s,d=0,m;
	cin >> n >> m;
	s = n;
	while(s<= m)
	{
		d++;
		s+=2*s;
	}
	cout << d;
	return 0;
}