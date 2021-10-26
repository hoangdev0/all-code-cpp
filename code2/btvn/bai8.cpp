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
string s;
int main()
{
	fr("bai8.inp");
	fw("bai8.out");
	getline(cin, s);
	while(s[s.size()-1] == ' ')
		s.erase(s.size()-1, 1);
	while(s[0] == ' ')
		s.erase(0, 1);
	while (s.find("  ") != -1)
	{
		s.erase(s.find("  "), 1);
	}
	cout << s;
	return 0;
}