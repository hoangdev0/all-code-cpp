#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e6 + 5;
int n, a[N],b[N],res[N];

int main()
{
	fr("nktick.inp");
	fw("nktick.out");

	cin >> n;
	For(i, 1, n, 1) cin >> a[i];
	For(i, 1, n-1, 1) cin >> b[i];
	res[0] = 0;
	res[1] = a[1];
	int i(2);
	while(i<=n)
	{
		res[i] = min((res[i - 1] + a[i]), (res[i - 2] + b[i - 1]));
		// cout << res[i];
		i++;
	}
	
	cout << res[n];
	return 0;
}