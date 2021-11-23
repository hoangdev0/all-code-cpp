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
int n, t[N], p[N], a[N];
int main()
{
	fr("work.inp");
	fw("work.out");

	cin >> n;
	For(i, 1, n, 1)
			cin >>
		t[i];
	For(i, 2, n, 1)
			cin >>
		p[i];
	a[1] = t[1];
	For(i, 2, n, 1)
		a[i] = min(a[i - 2] + p[i], a[i - 1] + t[i]);

	cout << a[n];

	return 0;
}