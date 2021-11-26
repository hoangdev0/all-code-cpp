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
int a[N], n, x, f[N];
int main()
{
	fr("daykhonggiam.inp");
	fw("daykhonggiam.out");

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	a[0] = -N;
	a[n + 1] = N;
	f[0] = -1;
	for (int i = 1; i <= n + 1; i++)
	{
		f[i] = -1;
		for (int j = 0; j < i; j++)
			if (a[i] >= a[j])
				f[i] = max(f[i], f[j] + 1);
	}
	cout << f[n + 1];
	return 0;
}