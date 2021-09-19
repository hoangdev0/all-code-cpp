#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+2;
int a[N];
void snt(int n)
{
	int d =0;
	for(int i = 2;i<n-1;i++) a[i] = 1;
	a[1]=0;
	for(int i = 2;i<=n;i++)
		if(a[i])
			for(int j = i*i;j<=n;j+=i) 
				a[j] = 0;
	for(int i = 2;i<= n/2;i++) 
		if(a[i] && a[n-i]) d++;
	cout << d;
}
int main()
{
	freopen("PRIME2.INP","r", stdin);
    freopen("PRIME2.OUT","w", stdout); 
	int n;
	cin >> n;
	snt(n);
	return 0;
}
