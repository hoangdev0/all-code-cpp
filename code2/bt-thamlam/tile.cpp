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
int s(N), n, a[N];
bool tile(int a, int b)
{
	return a > b;
}
int main()
{
	fr("tile.inp");
	fw("tile.out");

	cin >> n;
	For(i, 1, n, 1) cin >> a[i];
	sort(a + 1, a + n + 1,tile);
	int i(1);
	for (i; i <= n; i++)
	{
		s = min(s-1,a[i]);
		if (s == 0)
			break;
	}
	if(i>n) cout << n;
	else cout << i;
	return 0;
}