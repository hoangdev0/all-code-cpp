#include <bits/stdc++.h>
using namespace std;
int n, w, a[102], b[102], f[102][1002];
int main()
{
	freopen("valia.inp", "r", stdin);
	freopen("valia.out", "w", stdout);
	cin >> n >> w;
	for (int i = 1; i <= n; i++)
		cin >> a[i] >> b[i];
	for (int i = 1; i <= n; i++)
		cout << a[i] << " " << b[i] << endl;
	memset(f, 0, sizeof(f));
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= w; j++)
		{
			cout << "i: " << i << " j: " << j << endl;
			if (a[i] <= j)
			{
				f[i][j] = max(f[i - 1][j - a[i]] + b[i], f[i - 1][j]);
				cout << "a[i]: " << a[i] << "  b[i]: "<< b[i] << endl;
				cout << "f[i][j]: " << f[i][j] << "  f[i-1][j-a[i]]+b[i]: " << f[i - 1][j - a[i]] + b[i] << "  f[i-1][j]: " << f[i - 1][j] << endl;
			}
			else
			{
				f[i][j] = f[i - 1][j];
				cout << "a[i]: " << a[i] << "  b[i]: "<< b[i] << endl;
				cout << "f[i][j]: " << f[i][j] << " f[i-1][j]: " << f[i - 1][j] << endl;
			}
		}
	cout << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			cout << f[i][j] << " ";
		}
		cout << endl;
	}
	cout << f[n][w];
	return 0;
}