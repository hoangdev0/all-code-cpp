#include <bits/stdc++.h>
#define N 25
using namespace std;
int a[N],n,m,s = 0;
int main()
{
	cin >> n >> m;
	for(int i=1;i<=n;i++) cin >> a[i];
	sort(a+1,a+n+1);
	if(m<a[1]) 
	{cout << 0;return 0;}
	for(int i=n;i>=1;i--){s+=a[i];if(s > m) s -= a[i];
		else if(s == m) break;}
	cout << s;
	return 0;
}