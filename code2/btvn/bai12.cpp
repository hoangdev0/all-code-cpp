#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
const int N =1e2+50;
ll d(0);
string s;
int main()
{
	// fr("bai12.inp");
	// fw("bai12.out");
	cin >> s;
	For(i, 0, s.size() - 1,1) d = d * 10 + ((int)s[i] - 48);
	cout << d;
	return 0;
}