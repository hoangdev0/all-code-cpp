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
string s;
int n, x, d(0);
bool k = false;
int main()
{
	fr("brackets.inp");
	fw("brackets.out");

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		if (x > 0)
		{
			d++;
			s+='(';

		}
		else
		{
			if (d>0)
			{
				s += '(';
				for (d; d >= 0; d--)
					s += ')';
				d = 0;
			}
			else s += "()";
		}
	}
	cout << s;
	return 0;
}