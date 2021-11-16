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
int n;
struct tc{
	string s;
	int l;
	int i;
};
tc a[N];
bool cm(tc a, tc b)
{
	return (a.l < b.l||(a.l <= b.l && a.i < b.i));
}
int main()
{
	fr("trochoi.inp");
	fw("trochoi.out");

	cin >> n;
	For(i,1,n,1)
	{
		cin >> a[i].s;
		int d = 0;
		For(j, 0, a[i].s.size() - 1, 1) if (a[i].s[j] >= '0' && a[i].s[j] <= '9') d++;
		a[i].l = d;
		a[i].i = i;
	}
	sort(a+1,a+n+1,cm);
	For(i,1,n,1)
	{
		cout << a[i].s << endl;
	}
	return 0;
}