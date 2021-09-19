#include <bits/stdc++.h>
#include <string>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forl(value,begin,end,up) for(int value = begin;value >=
// end;value-=up)
#define elf else if
// typedef unsigned long long ll;
using namespace std;
int main()
{
	fr("NGOAC.inp");
	fw("NGOAC.out");
	int d(0);
	string s;
	getline(cin, s);
	int l = s.length() - 1;
	if (s[0] == ')')
		cout << "KHONG DUNG";
	else
	{
		For(i, 0, l, 1)
		{
			if (s[i] != '(' && s[i] != ')')
			{
				cout << "KHONG HOP LE";
				return 0;
			}
			else
			{
				if (s[i] == '(')
				{
					d++;
					if (s[i - 1] == ')' && d == 0)
					{
						cout << "KHONG DUNG";
						return 0;
					}
				}
				elf(s[i] == ')')
					d--;
			}
		}
		if (s[l] == '(')
			cout << "KHONG DUNG";
		elf(d == 0)
				cout
			<< "DUNG";
		else cout << "KHONG DUNG";
	}
	return 0;
}