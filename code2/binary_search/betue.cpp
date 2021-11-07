#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e6+5;
int n,m,a[N];
bool kt(int x)
{
	int s(0);
	for(int i = 1;i<=n;i++)
	{
		s+=a[i]/x;
		if(a[i]%x!=0)
			s++;
	}
	return (s<=m);
}
void solve()
{
	int res(0);
	int l = 1,r = 1e9;
	while(l<=r)
	{
		int g = l+(r-l)/2;
		if(kt(g))
		{
			res=g;
			r = g - 1;
		}else l = g+1;
	}
	cout << res;
}
int main()
{
	fr("betue.inp");
	fw("betue.out");
	
	cin >> m >> n;
	for(int i = 1;i<=n;i++)
	cin >> a[i];
	solve();
	
	return 0;
}