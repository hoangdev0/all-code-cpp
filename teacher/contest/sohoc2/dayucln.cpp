#include <bits/stdc++.h>
#define N 100005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int a[N],b[N],n,x,s;
int lcm(int a, int b)
{
	return a * b / __gcd(a, b);
}
int main()
{
	fr("dayucln.inp");
	fw("dayucln.out");

	cin >> x;
	For(i,1,x,1)
	{
		cin >> n;
		For(i,0,n-1,1) cin >> a[i];
		b[0] = a[0];
		b[n] = a[n-1];
		For(i,1,n-1,1) b[i] = lcm(a[i], a[i - 1]);
		
		For(i, 0, n, 1) cout << b[i] << " ";
		cout << '\n';
	}
	return 0;
}