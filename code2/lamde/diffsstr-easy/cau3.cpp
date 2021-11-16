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
string s, s1[N];
int main()
{
	fr("cau3.inp");
	fw("cau3.out");

	cin >> s;
	int i(1);
	while (i <= s.size())
	{
		for (int j = 0; j <= s.size() - i; j++)
			cout << s.substr(j, i) << endl;
		i++;
	}
	return 0;
}