#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
// const int N = 1e6 + 5;
int n,x,m;
int main()
{
	fr("tile.inp");
	fw("tile.out");

	cin >> n;
	For(i, 1, n, 1)
	{
		cin >> x;
		m = max(m, x);
	}
	m++;
	if (m < n)
		cout << m;
	else
		cout << n;
	return 0;
}