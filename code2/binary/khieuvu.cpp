#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N =1e6+5;
int a[N], n, x;
void solve()
{
	int s(0),l,r;
	for(int i = 1;i <= n;i++)
	{
		l = lower_bound(a+1,a+n+1,a[i]+x)-&a[0];
		if(a[i]+x == a[l])
		{
			r = upper_bound(a+1,a+n+1,a[i]+x) - &a[0]-1;
			s+=(r-l+1);
		}
	}
	cout << s;
}
int main()
{
	fr("khieuvu.inp");
	fw("khieuvu.out");

	cin >> n >> x;
	for(int i =1;i <= n; i++)
	cin >> a[i];
	solve();
		
	return 0;
} 