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
int n,s,a[N];
bool check(int x)
{
	int r(0);
	For(i, 1, n, 1) r += (x / a[i]);
	return r >= s;
}
void binary()
{
	int k, d = 1, c = s * 500;
	while(d <= c)
	{
		int g = (c + d) / 2;
		if(check)
		{
			k = g;
			c = g - 1;
		}else
			d = g + 1;
	}
	cout << k;
}
int main()
{
	fr("binary.inp");
	fw("binary.out");

	cin >> s >> n;
	For(i,1,n,1) cin >> a[i];
	binary();

	return 0;
}