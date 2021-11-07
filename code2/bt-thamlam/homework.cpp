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
int s, n, a[N],d(0);
int main()
{
	fr("homework.inp");
	fw("homework.out");

	cin >> n >> s;
	For(i, 1, n, 1) cin >> a[i];
	sort(a + 1, a + n + 1);
	int i(1);
	for (i; i <= n;i++)
	{
		if(s>= a[i])
			s += a[i];
		else break;
	}
	cout << i-1;
	return 0;
}