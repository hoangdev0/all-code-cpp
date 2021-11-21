#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e6 + 5;
int a[N], res,i[N],j[N],k[N],n;
int main()
{
	fr("bo3so.inp");
	fw("bo3so.out");

	cin >> n;

	for (int x = 1; x <= n; x++) cin >> a[x];

	i[1] = a[1];
	for (int x = 2; x < n-1;x++)
		i[x] = max(i[x - 1], a[x]);

	j[2] = i[1] + 2 * a[2];
	for (int x = 3; x < n;x++)
		j[x] = max((j[x - 1]), (i[x-1] + 2 * a[x]));

	k[3] = j[2] + 3 * a[3];
	for (int x = 4; x <= n;x++)
		k[x] = max(k[x - 1], j[x-1] + 3 * a[x]);
	
	cout << k[n];

	return 0;
}