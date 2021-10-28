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
int n, a[N], x;
bool binary(int l,int r, int x,int a[])
{	
	sort(a+1,a+n+1);
	while(l<=r)
	{
		int g = (l + r) / 2;
		if(a[g] == x) return true;
		else if(a[g] > x)
			r = g - 1;
		else
			l = g + 1;
	}
	return false;
}
int main()
{
	fr("binary.inp");
	fw("binary.out");
	cin >> n >> x;
	For(i, 1, n, 1) cin >> a[i];
	if(binary(1,n,x,a))
		cout << "YES";
	else
		cout << "NO";
	return 0;
}