#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forl(value,begin,end,up) for(int value = begin;value >= end;value-=up)
#define elf else if
// typedef unsigned long long ll
using namespace std;
int t, a[26],b[26];
string s, s1;
int main()
{
	fr("kituchung.inp");
	fw("kituchung.out");
	memset(a, 0, 150);
	cin >> s;
	cin >> s1;
	For(i, 0, s.length() - 1, 1)
	{
		a[s[i] - 'a']++;
	}
	For(i, 0, s1.length() - 1, 1)
	{
		b[s1[i] - 'a']++;
	}
	For(i, 0, 26, 1)
	{
		if (a[i] >= 1 && b[i] >= 1)
		{
			cout << (char)i << endl;
		}
	}
	return 0;
}