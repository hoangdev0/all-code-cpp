#include <bits/stdc++.h>
#include <string>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forl(value,begin,end,up) for(int value = begin;value >= end;value-=up)
// #define elf else if
// typedef unsigned long long ll;
using namespace std;
int main()
{
	fr("WORDS.inp");
	fw("WORDS.out");
	int d(1);
	string s;
	getline(cin, s);
	// while (s[0] == ' ')
	// 	s.erase(0, 1);
	while (s[s.size() - 1] == ' ')
		s.erase(s.size(), 1);
	For(i, 0, s.length() - 1, 1) if (s[i] != ' ' && s[i + 1] == ' ')
	{
		d++;
	}
	cout << d << endl;
	For(i, 0, s.length() - 1, 1)
	{
		if (s[i] != ' ')
			cout << s[i];
		if (s[i] != ' ' && s[i + 1] == ' ')
			cout << endl;
	}
	return 0;
}