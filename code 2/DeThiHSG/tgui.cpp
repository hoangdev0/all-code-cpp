#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int n, m, d(0);
int main()
{
	fr("tgui.inp");
	fw("tgui.out");
	cin >> n >> m;
	while(n<m)
	{
		n += round(((float)84/1000 * n));
		d++;
	}
	cout << d;
	return 0;
}