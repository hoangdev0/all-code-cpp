#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
#define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
// #define nhap(t, n, b)       \
	for (int i = t;i <= n; i++) \
		cin >> b[i];
#define elf else if
typedef unsigned long long ll;
using namespace std;
const int N =1e6+5;
int a[N], n,s[N],d,m,v,t;
bool k[N];
int main()
{
	fill(s+1,s+n+1,0);
	fill(k+1,k+n+1,false);
	fr("szero.inp");
	fw("szero.out");
	cin >> n;
	d = n;
	For(i, 1, n, 1) 
	{
		cin >> a[i];
		s[i] += a[i];
	}
	s[0] = 0;
	For(i,1,n,1)
	{
		For(j,0,i-1,1)
		if(s[j]-s[i]==0 && s[j]-s[i] > m) 
		{
			m = j - i + 1;
			v = i;
			t = j;
		}
	}
	cout << v << " " << t;
	return 0;
}