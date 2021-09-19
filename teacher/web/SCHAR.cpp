#include <bits/stdc++.h>
#include <algorithm>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forl(value,begin,end,up) for(int value = begin;value >= end;value-=up)
#define elf else if
// typedef unsigned long long ll
using namespace std;

int t;
string s, s1;

int main()
{
	fr("BAI3.inp");
	fw("BAI3.out");

	cin >> t;
	For(i, 1, t, 1)
	{
		cin >> s;
		s1 = s;
		bool k = false;
		For(j, 0, s1.length() - 1, 1)
		{
			s = s1;
			s = s.erase(j, 1);
			int d = s.find(s1[j]);
			if (d == -1)
			{
				k = true;
				cout << j + 1 << endl;
				break;
			}
		}
		if (!k)
		{
			cout << -1 << endl;
		}
	}

	return 0;
}