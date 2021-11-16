#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
typedef unsigned long long ll;
// const int N =1e6+5;
using namespace std;
string s;
ll resault(1),n;
int main()
{
	// fr(".inp");
	// fw(".out");

	cin >> s;

	n = s.size() - 1;
	For(i, 0, n, 1)
		resault = (long long)resault * 2 + (int)(s[i] - 48);
	cout << resault;
	return 0;
}