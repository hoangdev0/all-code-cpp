#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
const int N = 1e6 + 5;
int n, a[N], b[N], x1(0), s, i(2);
bool k(int n)
{
	for (int i = 2;i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}
int main()
{
	memset(a, 0, N);
	fr("snn.inp");
	fw("snn.out");
	cin >> n;
	if (k(n))
	{
		cout << -1;
		return 0;
	}
	for (i; i <= n; i++)
	{
		while (n % i == 0)
		{
			a[i]++;
			n /= i;
		}
		// cout<<"n: " << n << endl;
	}
	// cout << i << " " << a[i] << endl;
	for (i; i >= 2; i--)
	{
		while (a[i] > 0)
		{
			if (i * (x1 % 10) < 10)
			{
				if (x1 % 10 == 0)
					x1 = ((x1 / 10) * 10) + i;
				else
					x1 = ((x1 / 10) * 10) + (i * (x1 % 10));
				// cout << x1 << endl;
			}
			else
			{
				x1 = x1 * 10 + i;
				// cout << x1 << endl;
			}
			a[i]--;
			// cout << i << " " << x1 << endl;
		}
	}
	s = x1;
	i = 1;
	while (s > 0)
	{
		b[i] = s % 10;
		i++;
		s /= 10;
	}
	sort(b + 1, b + i);
	// cout << x1 << " " << x2;
	for (int j = 1; j < i; j++)
		cout << b[j];
	return 0;
}