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
int n, a[N], x,q;
int binary(int l,int r, int x, int a[])
{	
	while(l<=r)
	{
		int g = (l + r) / 2;
		if(a[g] == x) return g;
		else if(a[g] > x)
			r = g - 1;
		else
			l = g + 1;
	}
	return 0;
}
int main()
{
	fr("binary.inp");
	fw("binary.out");

	cin >> n;
	For(i, 1, n, 1) cin >> a[i];
	sort(a+1,a+n+1);
	cin >> q;
	For(i, 1, q, 1)
	{
		cin >> x;
		cout << binary(1, n, x,a) << endl;
	}
	return 0;
}