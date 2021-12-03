#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
// const int N =1e6+5;
string s="",x,st;
int cv(string t)
{
	int sum(0);
	for (int i = 0; i < t.size();i++)
		sum = sum * 10 + (int)(t[i] - 48);
	return sum;
}
int main()
{
	fr("giainen.inp");
	fw("giainen.out");

	getline(cin,st);
	st = 'A' + st;
	for(int i = 1;i<st.size();i++)
	{
		if(st[i]>=48 && st[i]<=57)
			x += st[i];
		else
		{
			if(x.size()>0)
			{
				int n = cv(x);
				for (int j = 1; j <= n;j++)
					s += st[i];
				x = "";
			}elf(st[i-1]>=65&&st[i-1]<=90)
				s += st[i];
		}
	}

	cout << s;

	return 0;
}