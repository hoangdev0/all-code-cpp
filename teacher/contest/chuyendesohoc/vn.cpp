#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int a, b, s;
int main()
{
	fr("vn.inp");
	fw("vn.out");
	cin >> a >> b;
	s = __gcd(a, b);
	cout << s << endl;
	cout << a / s << " " << b / s;
	return 0;
}