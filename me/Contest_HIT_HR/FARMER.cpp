#include <bits/stdc++.h>
#define N 1002
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;

int q,n,m,a[N],b[N],sum(0);

int main()
{
	fr("FARMER.INP");
	fw("FARMER.OUT");
	cin >> q >> n >> m;
	For(i, 1, n, 1) cin >> a[i];
	For(i, 1, m, 1) cin >> b[i];
	For(i,1,n,1)
	{
		sum += a[i];
		if(sum == q)
		{
			cout << sum;
			return 0;
		}
		elf(sum > q) sum -= a[i];
	}
	For(i,1,m,1)
	{
		sum += b[i];
		if(sum == q)
		{
			cout << sum;
			return 0;
		}
		elf(sum > q) sum -= b[i];
	}
	cout << sum;
	return 0;
}