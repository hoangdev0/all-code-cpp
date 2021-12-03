#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e5 + 5;
int n, x,m(0), a[N];
ll res(0);
int main()
{
	fr("cap_so_bang_nhau.inp");
	fw("cap_so_bang_nhau.out");
	fill(a + 1, a + N + 1, 0);
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		a[x]++;
		m = max(m,x);
	}

	for (int i = 1; i <= m; i++)
		if (a[i]>1)
			res += (a[i] * (a[i] - 1) / 2);
	
	cout << res;

	return 0;
}