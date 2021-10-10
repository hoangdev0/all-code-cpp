#include <bits/stdc++.h>
#define N 1000
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int y, n, k, s, t;
int main()
{
	fr("bmarket.inp");
	fw("bmarket.out");

	cin >> y >> k >> n;
	if (y >= n)
		cout << -1;
	else
	{
		for (n; n >= k; n--)
		{
			if (n % k == 0)
			{
				n -= y;
				break;
			}
		}
		if(n<=0)
			cout << -1;
			else{
				int t = __gcd(n, k);
				for(t;t<=n;t+=k)
					cout << t << " ";
			}
	}
	return 0;
}