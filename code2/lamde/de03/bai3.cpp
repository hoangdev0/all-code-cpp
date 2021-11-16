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
bool a[N];
int n, mi(N), d(0), x,ma(0);
void sang()
{
	fill(a + 1, a + N + 1, true);
	a[0] = false;
	a[1] = false;
	for (int i = 2; i * i <= N; i++)
		if (a[i])
			for (int j = i * i; j <= N; j += i)
				a[j] = false;
}
int main()
{
	sang();
	fr("bai3.inp");
	fw("bai3.out");

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		a[x] = false;
		mi = min(mi, x);
		ma = max(ma, x);
	}
	while (mi<=ma)
	{
		if (a[mi])
			d++;
		mi++;
	}
	cout << d;
	return 0;
}