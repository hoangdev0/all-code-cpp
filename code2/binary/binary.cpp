#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N =1e6+5;
int a[N], n, x;
void binary()
{
	int l = 1, r = n;
	while(l<=r)
	{
		int g = (r + l) / 2;
		if(a[g] == x)
		{
			cout << g;
			break;
		}else if(a[g] > x)
			r = g - 1;
		else
			l = g + 1;
	}
}
int main()
{
	fr("binary.inp");
	fw("binary.out");

	cin >> n >> x;
	for(int i = 1;i <= n; i++)
	{
		cin >> a[i];
	}
	// cach 1:
	// int v = lower_bound(a + 1, a + 1 + n, x) - &a[0];
	// cout << v;
	// cach 2:
	binary();
	return 0;
} 