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
int a[N], d(0), n, dmax[N], m(0), k(1);
int main()
{
	fr("maxpos.inp");
	fw("maxpos.out");

	cin >> n;
	dmax[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (a[i] > 0)
			d++;
		else
			d = 0;
		if (m < d)
		{
			m = d;
			k = 1;
			dmax[k] = i;
		}
		elf(m == d)
		{
			k++;
			dmax[k] = i;
		}
	}
	cout << m << " " << k << endl;
	for (int i = 1; i <= k; i++)
	{
		for (int j = dmax[i] - m + 1; j <= dmax[i]; j++)
			cout << a[j] << " ";
		cout << "\n";
	}
	return 0;
}