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
int d(0);
int main()
{
	// fr("bai6.inp");
	// fw("bai6.out");

	cin >> s;
	if (s[0] == ')' || s[s.size()-1] == '(')
		cout << "NO";
	else
	{
		For(i, 0, s.size() - 1, 1)
		{
			if (s[i] == '(')
				d++;
			else
				d--;
			if(d<0)
			{
				cout << "NO";
				return 0;
			}
		}
		if(d == 0)
			cout << "YES";
		else
			cout << "NO";
	}
	return 0;
}