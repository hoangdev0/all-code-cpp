#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
const int N = 1e5 + 2;
int d(0), l(0), c(0), n, a[N], x;
int main()
{
	fr("DIV3.inp");
	fw("DIV3.out");

	cin >> n;
	For(i, 1, n, 1)
	{
		cin >> x;
		a[i] = x % 3;
		if (a[i] == 0)
			d++;
		elf(a[i] == 1) l++;
		else c++;
	}
	cout << ((d * (d - 1)) / 2)+(c*l);
	return 0;
}