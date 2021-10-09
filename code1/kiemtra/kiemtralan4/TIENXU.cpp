#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("TIENXU.INP","r",stdin);
	freopen("TIENXU.OUT","w",stdout);
	int a,b,c,A,B;
	cin >> a >> b >> c;
	if(a>b) swap(a,b);
	int k = c/a;
	for(k;k>=0;k--)
	{
		int h = (c-k*a);
		if(h%b == 0)
		{
           	cout << (h/b)+k;
           	return 0;
        
		}
	}
	cout << -1;
	return 0;
}
