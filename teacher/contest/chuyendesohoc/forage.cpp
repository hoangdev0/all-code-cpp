#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int p, n, k, s, t;
int main()
{
	fr("forage.inp");
	fw("forage.out");
	cin >> p >> n >> k;
	s = (k * (n * (n + 1) / 2));
	t = p - s;
	if (t >= 0)
		cout << "YES";
	else
	{
		cout << "NO" << endl;
		cout << abs(t);
	}
	return 0;
}