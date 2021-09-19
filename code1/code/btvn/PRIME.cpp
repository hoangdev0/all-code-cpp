#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+2;
int a[N];
void snt(int n)
{
	int s =0;
	for(int i = 2;i<n-1;i++) a[i] = 1;
	a[1]=0;
	for(int i = 2;i<=n;i++)
		if(a[i])
			for(int j = i*i;j<=n;j+=i) 
				a[j] = 0;
	for(int i = 2;i<= n;i++) 
		if(a[i]) s+=i;
	cout << s;
}
int main()
{
	freopen("PRIME.INP","r", stdin);
    freopen("PRIME.OUT","w", stdout); 
	int n;
	cin >> n;
	snt(n);
	return 0;
}
