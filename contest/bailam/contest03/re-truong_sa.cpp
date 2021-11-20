#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e3 + 5;
const int M = 1e9 + 5;
int n, r;
float ma(-M), mi(M), k;
struct dd
{
	int x;
	int y;
};
dd a[N];
int main()
{
	fr("truong_sa.inp");
	fw("truong_sa.out");

	cin >> n;
	For(i, 1, n, 1) cin >> a[i].x >> a[i].y;
	For(i, 1, n, 1)
	{
		ma = 0;
		For(j, 1, n, 1)
		{
			k = sqrt(pow(a[j].x - a[i].x, 2) + pow(a[j].y - a[i].y, 2));
			ma = max(ma, k);
		}
		if (mi > ma)
		{
			r = i;
			mi = ma;
		}
	}

	cout << a[r].x << " " << a[r].y;
	return 0;
}