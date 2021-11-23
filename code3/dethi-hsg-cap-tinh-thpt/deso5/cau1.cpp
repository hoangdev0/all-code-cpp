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
int n,d(0),a[N],c[N],x,x1;
int main()
{
	fr("cau1.inp");
	fw("cau1.out");
	x1 = -N;
	a[0] = 0;
	cin >> n;
	For(i,1,n,1)
	{
		cin >> x;
		if(x>=x1)
			a[i] = a[i - 1] + 1;
		else
			a[i] = 1;
		x1 = x;
	}
	cout << a[n];

	return 0;
}