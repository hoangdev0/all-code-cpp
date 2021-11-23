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
string s, x;
int a[N], n;
void addbra()
{
	s = "()" + s;
}
void addbra1(int p)
{
	s.insert(p, ")");
	s = '(' + s;
}
int main()
{
	fr("brackets.inp");
	fw("brackets.out");

	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = n; i >= 1; i--)
	{
		if (a[i] == 0)
			addbra();
		else
			addbra1(a[i]);
		// cout << s << endl;
	}
		cout << s << endl;

	return 0;
}