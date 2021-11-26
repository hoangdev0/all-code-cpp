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
int a[150][150];
int w[N], v[N], m, n, sum(0), c[N], d(0);
int main()
{
	fr("bag.inp");
	fw("bag.out");

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> w[i] >> v[i];

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		{
			cout << i << " " << j << endl;
			if (w[i] > j)
			{
				a[i][j] = a[i - 1][j];
				cout << w[i] << " > " << j << endl;
				cout << a[i][j] << " = " << a[i - 1][j] << endl;
			}
			else
			{
				a[i][j] = max(a[i - 1][j], a[i - 1][j - w[i]] + v[i]);
				cout << w[i] << " <= " << j << endl;
				cout << a[i][j] << " = max(" << a[i - 1][j] << " , " << a[i - 1][j - w[i]] + v[i] << ")" << endl;
			}
			cout << endl;
		}

	cout << a[n][m] << endl;

	for (int i = n, j = m; i > 0; i--)
	{
		if (j > w[i] && a[i][j] == a[i - 1][j - w[i]] + v[i])
		{
			c[d++] = i;
			sum += w[i];
			j -= w[i];
		}
	}
	// d--;
	while (d--)
		cout << c[d] << " ";
	cout << endl;
	cout << sum;

	return 0;
}