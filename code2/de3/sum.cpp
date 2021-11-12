#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N =1e5+6;
int n,a[N];
bool k = true;
ll s(0);
int main()
{
	fr("sum.inp");
	fw("sum.out");
	
	cin >> n;
	For(i, 1, n, 1)
	{
		cin >> a[i];
		s += a[i];
	}
	For(i, 1, n, 1)
	{
		if(s-(2*a[i]) != 0)
			continue;
		cout << i;
		k = false;
		break;
	}
	if(k)
		cout << -1;

	return 0;
}