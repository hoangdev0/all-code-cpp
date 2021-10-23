#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int m, n;
int ktra(int m, int n)
{
	for (int i = 2; i * i <= m; i++)
	{
		if (m % i == 0)
		{
			if (n % i != 0 || n % (m / i) != 0)
				return 0;
		}
	}
	return 1;
}
int main()
{
	fr("bai1.inp");
	fw("bai1.out");
	cin >> m >> n;
	if(m > n)
		swap(m, n);
	cout << ktra(n, m);
	return 0;
}