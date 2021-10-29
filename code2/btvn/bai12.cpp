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
ll d(0),d1(0);
string s,s1;
int main()
{
	// fr("bai12.inp");
	// fw("bai12.out");
	cin >> s >> s1;
	For(i, 0, s.size() - 1,1) d = d * 10 + ((int)s[i] - 48);
	For(i, 0, s1.size() - 1,1) d1 = d1 * 10 + ((int)s1[i] - 48);
	cout << d + d1;
	return 0;
}