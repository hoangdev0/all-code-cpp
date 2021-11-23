#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e4 + 5;
int a[N][N];
int n, x, res(0), k;
int main()
{
	fr("cau3.inp");
	fw("cau3.out");

	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> x;
			a[i][j] = a[i][j - 1] + a[i - 1][j] - a[i - 1][j - 1] + x;
		}
	}
	for (int i = 1; i <= (n - k + 1); i++)
		for (int j = 1; j <= (n - k + 1); j++)
		{
			int u = i + k - 1, v = j + k - 1;
			int s = a[u][v] - a[i-1][v] - a[u][j - 1] + a[i - 1][j - 1];
			res = max(res, s);
		}

	cout << res;

	return 0;
}