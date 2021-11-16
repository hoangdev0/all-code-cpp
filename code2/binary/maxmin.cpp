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
int a[N],n,x;
void solve()
{
	sort(a+1,a+n+1);
	if(a[1]>x)
	
		cout << "EroRr";
	else{
		int l = 1,r=n,g,res(0);
		while(l<=r)
		{
			g= (l+r)/2;	
			if(a[g] <= x)
			{
				res = a[g];
				l = g+1;
			}else r = g-1;
		}
		cout << res;
	}
}
int main()
{
	fr("maxmin.inp");
	fw("maxmin.out");
 
	cin >> n >> x;
	for(int i=1;i<=n;i++)
	cin >> a[i];
	solve();

	return 0;
}