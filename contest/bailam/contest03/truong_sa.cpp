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
const int M = 1e6 + 5;
struct td
{
	int x;
	int y;
};
td a[N];
int n,res;
float m, c[N], k,mi(M);
int main()
{
	fr("truong_sa.inp");
	fw("truong_sa.out");

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i].x >> a[i].y;
	for (int i = 1; i <= n; i++)
	{
		m = 0;
		for (int j = 1; j <= n; j++)
		{
			k = sqrt(pow((a[j].x - a[j].x) + (a[j].y - a[i].y), 2));
			m = max(k, m);
		}
		c[i] = m;
	}
	
	for (int i = 1;i<=n;i++)
	{
		if(mi>c[i])
		{
			mi = c[i];
			res = i;
		}
	}
	cout << a[res].x << " " << a[res].y;


	return 0;
}