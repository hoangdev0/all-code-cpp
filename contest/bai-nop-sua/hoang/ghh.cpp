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
int a[N], b[N], j(1), n, x;
bool kt(int n)
{
	int s(n + 1);
	int i(2);
	for (i; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			s += (i + n / i);
		}
	}
	i--;
	if (i * i == n)
		s -= i;
	if (2 * n <= s)
		return true;
	return false;
}
int main()
{
	fr("ghh.inp");
	fw("ghh.out");

	cin >> n;
	For(i, 1, n, 1)
	{
		cin >> x;
		if (kt(x))
		{
			b[j] = x;
			j++;
		}
	}
	j--;
	cout << j << endl;
	For(i, 1, j, 1)
			cout
		<< b[i] << endl;

	return 0;
}