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
int n, a[N], s(0);
bool cm(int a, int b)
{
	return a > b;
}
int main()
{
	fr("vatsua.inp");
	fw("vatsua.out");

	cin >> n;
	For(i, 0, n - 1, 1) cin >> a[i];
	sort(a, a + n, cm);
	For(i, 0, n - 1, 1)
	{
		s += a[i] - i;
		if (a[i] - i == 0)
			break;
	}
	cout << s;
	return 0;
}