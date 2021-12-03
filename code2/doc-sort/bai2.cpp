#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e6 + 5;
int m, n, d(0), a[N];
bool u(int n)
{
	int i = 2, s(1);
	for (i; i * i < n;i++)
	if(n%i==0)
		s += i + (n / i);
	if(i*i==n)
		s += i;
	return s > n;
}
int main()
{
	fr("bai2.inp");
	fw("bai2.out");

	cin >> m >> n;
	for (m; m <= n; m++)
		if (u(m))
			d++;

	cout << d;

	return 0;
}