#include <bits/stdc++.h>
#define N 10001
#define M 1001
using namespace std;
int main()
{
	freopen("SOLA.INP","r",stdin);
	freopen("SOLA.OUT","w",stdout);
	int n,mi=N,ma=-N,c[M],x,a[N];
	cin >> n;
	memset(c,0,n+1);
	for(int i = 1;i <=n ;i++)
	{
		cin >> a[i];
		c[a[i]]++;
		if(a[i] > ma) ma = a[i];
		if(a[i] < mi) mi = a[i];
	}
	for(int i = mi;i<=ma;i++)
	{
		if(c[i] == 1) 
		{
			cout << i << " ";
			x = i;
			break;
		}
	}
	for(int i = 1;i<=n;i++)
	{
		if(x == a[i]) 
		{
			cout << i;
			break;
		}
	}
	return 0;
}