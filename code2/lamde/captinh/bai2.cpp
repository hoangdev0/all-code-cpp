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
int n, res(0);
string s;
bool check(string s)
{
	string x[300],x1="";
	int da(0), db(0), d(0), k;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'b')
		{
			db++;
			if (db > 1)
				return false;
		}
		else
		{
			if (s[i] != 'a' && s[i] != 'b')
				return false;
			db = 0;
		}
		x1 = s.substr(0, i + 1);
		for(int j = i+1;j < s.size();j+=i)
		{
			 
		}
	}
	return true;
}
int main()
{
	fr("bai2.inp");
	fw("bai2.out");

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> s;
		if (check(s))
			res++;
	}

	cout << res;

	return 0;
}