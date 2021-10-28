#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e6 + 5;
int n, a[N], x;
ll s(0);
void cacula()
{
	sort(a + 1, a + n + 1);
	int l, r;
	For(i,1,n-1,1)
	{
		l = lower_bound(a + i + 1, a + n + 1, a[i] + x)-a;
		if(l==0)
			continue;
		r = upper_bound(a + i + 1, a + n + 1, a[i] + x) - a - 1;
		s += (r - l + 1);
	}
}
int main()
{
	fr("binary.inp");
	fw("binary.out");
	cin >> n >> x;
	For(i, 1, n, 1) cin >> a[i];
	cacula();
	cout << s;
	return 0;
}