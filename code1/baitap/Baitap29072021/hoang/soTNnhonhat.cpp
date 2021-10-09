#include <bits/stdc++.h>
#define N 1000001
using namespace std;
int main()
{
	freopen("soTNnhonhat.inp","r",stdin);
	freopen("soTNnhonhat.out","w",stdout);
	int n,a[N],c[N];
	memset(c,0,N);
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if(a[i] < N) c[a[i]]++;
	}
	for(int i = 0;i<=n;i++)
	{
		if(c[i] == 0)
		{
			cout << i;
			break;
		}
	}
	return 0;
}