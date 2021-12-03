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
int ha[N],hb[N],a(1),b(1),n,x,t;
void solve()
{
	sort(ha + 1, ha + a);
	sort(hb + 1, hb + b);
	int res(0);
	for (int i = 1; i < b;i++)
	{
		int l = lower_bound(ha + 1, ha + a, hb[i]+1)-ha;
		cout << ha[l] << endl;
		if(hb[i]+x > ha[l]) continue;
		int r = upper_bound(ha + 1, ha + a, hb[i] + x) - ha - 1;
		res += (r - l + 1);
	}
	cout << res;
}
int main()
{
	fr("bai3.inp");
	fw("bai3.out");

	cin >> n >> x;
	for(int i = 1;i<=n;i++)
	{
		cin >> t;
		if(t>0)
		{
			ha[a] = t;
			a++;
		}else 
		{
			hb[b] = abs(t);
			b++;
		}
	}

	// for (int i = 1;i<a;i++)
	// 	cout << ha[i] << " ";
	// cout << "\n";
	// for (int i = 1;i<b;i++)
	// 	cout << hb[i] << " ";
	solve();

		return 0;
}