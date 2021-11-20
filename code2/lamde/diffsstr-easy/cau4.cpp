#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e6 + 5;
string s, s1[N], x;
int main()
{
	fr("cau3.inp");
	fw("cau3.out");

	cin >> s;
	int i(1);
	while (i <= s.size())
	{
		x = s.substr(0, i);
		if(s.find(x,i+1) == -1)
		cout << x << endl;

		for (int j = i; j < s.size(); j++)
		{
			x += s[j];
			x.erase(0, 1);
			if(s.find(x,j+1) == -1)
			cout << x << endl;
		}
		i++;
	}
	return 0;
}