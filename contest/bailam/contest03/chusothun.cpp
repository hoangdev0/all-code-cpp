#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
// const int N = 1e7 + 5;
int n;
void res(int n)
{
	int t(0),m(0),x,ans,n1;
	ll c(0),a(1), d(1);
	while (c <= n)
	{
		t = c;
		c += (int)9 * (m + 1) * pow(10, m);
		m++;
	}
	for (int i = 1; i < m; i++)
		d *= 10;
	a = d + ceil((double)(n - t - m) / m);
	n1 = m * (a - 1 - d) + (m + t);
	x = m + 1 - (n - n1);
	while (x > 0)
	{
		ans = a % 10;
		x--;
		a /= 10;
	}
	cout << ans << endl;
}
int main()
{
	// sang();
	fr("chusothun.inp");
	fw("chusothun.out");

	while (cin >> n)
	{
		if(n<10)
			cout << n << endl;
		else
			res(n);
	}
	
	return 0;
}