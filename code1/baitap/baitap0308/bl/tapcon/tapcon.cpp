#include <bits/stdc++.h>
#define N 10001
#define M 32001
using namespace std;
int n,x,d=1,a[N];
bool c[M];
int main()
{
	freopen("test2.inp","r",stdin);
	freopen("test2.out","w",stdout);
	memset(c,false,M);
	cin >> n;
	for(int i = 1;i<=n;i++)
	{	
		cin >> x;
		if(!c[x])
		{
			c[x] = true;
			a[d] = x;
			d++;
		};
	}
	d--;
	sort(a+1,a+d+1);
	cout << d << endl;
	for(int i = 1;i <= d;i++) cout << a[i]<<" ";
	return 0;
}