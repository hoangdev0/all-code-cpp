#include <bits/stdc++.h>
#define N 1000
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
long long m(1), x, n,a[N];
long long lcm(long long a, long long b) 
{
	return (a * b / (__gcd(a, b))); 
}
int main()
{
	fr("tn.inp");
	fw("tn.out");
	cin >> n;
	For(i, 1, n, 1)
	{
		cin >> a[i];
		m = lcm(m, a[i]);
	}
	cout << m << endl;
	For(i, 1, n, 1)
		cout << m / a[i] << " ";
	return 0;
}