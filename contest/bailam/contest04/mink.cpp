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
int n, k,a[N];
int main()
{
	fr("mink.inp");
	fw("mink.out");

	cin >> n >> k;
	For(i, 1, n, 1) cin >> a[i];
	sort(a + 1, a + n + 1);
	cout << a[k];

	return 0;
}