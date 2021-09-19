#include <bits/stdc++.h>
#define N 10001
using namespace std;
int n,x,d=0,c[N],m=-1;
int main()
{
	freopen("tro_choi.inp","r",stdin);
	freopen("tro_choi.out","w",stdout);
	cin >> n;
	memset(c,0,n+1);
	for(int i = 1;i<=n;i++)
	{
		cin >> x;
		c[x]++;
		if(m<c[x]) m = c[x];
	}
	cout << m;
	return 0;
}