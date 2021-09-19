#include <bits/stdc++.h>
#define N 100002
using namespace std;
int a[N],n,s=0;
bool xx(int a, int b)
{
	return (a>b);
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	#endif
	cin >> n;
	for(int i =1;i<=n;i++)
	{
	  cin >> a[i];
	}
	sort(a+1,a+n+1,xx);
	for(int i = 1;i<=n;i++) cout << a[i] << " ";
	return 0;
}
