#include <bits/stdc++.h>
#define N 10001
#define M 32001
using namespace std;
int n,x,d=1,a[N],c[M],m=-M;
int main()
{
	freopen("tapcon.inp","r",stdin);
	freopen("tapcon.out","w",stdout);
	memset(c,false,M);
	cin >> n;
	for(int i = 1;i<=n;i++)
	{	
		cin >> x;
		if(c[x] == 0)
		{
			c[x]++;
			d++;
		}
		if(x>m) m = x;
	}
	d--;
	cout << d << endl;
	for(int i = 1;i <= m;i++) 
		if(c[i]>0) cout << i<<" ";
	return 0;
}