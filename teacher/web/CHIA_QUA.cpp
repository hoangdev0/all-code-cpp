#include <bits/stdc++.h>
#include <string>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
using namespace std;
int x, y, d(2), n, i = 2;
int main()
{
	fr("CHIA_QUA.inp");
	fw("CHIA_QUA.out");
	cin >> x >> y;
	n = __gcd(x, y);
	for (i; i * i <= n; i++)
		if (n % i == 0)
			d += 2;
	if (i * i == n)
		d--;
	cout << d;
	return 0;
}