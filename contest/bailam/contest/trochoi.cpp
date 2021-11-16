#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
int n;
const int N = 1e4 + 5;
struct tc
{
	string s;
	int l;
	int d;
};
tc a[N];
bool cm(tc a, tc b)
{
	return (a.l < b.l||(a.l <=b.l && a.d < b.d));
}
string x;
int main()
{
	fr("trochoi.inp");
	fw("trochoi.out");

	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> x;
		a[i].s = x;
		int d = 0;
		for(int j=0;j<=x.size()-1;j++)
			if(x[j] >= '0' && x[j] <= '9') d++;
		a[i].l = d;
		a[i].d=i;
	}
	sort(a + 1, a + n + 1, cm);
	For(i, 1, n, 1)
	cout<< a[i].s << endl;
	return 0;
}