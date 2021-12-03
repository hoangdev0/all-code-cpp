#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e6 + 5;
int m, n, d(0), a[N];

void pp()
{
	fill(a + 1, a + N + 1, 1);
	a[0] = 0;
	a[1] = 0;
	for (int i = 2; i <= N / 2; i++)
		for (int j = 2 * i; j <= N; j += i)
			a[j] += i;
}
int main()
{
	pp();
	fr("bai2.inp");
	fw("bai2.out");

	cin >> m >> n;
	for (int i = m; i <= n; i++)
		if (a[i] > i)
			d++;

	cout << d;

	return 0;
}