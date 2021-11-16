#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N =1e6+5;
string s,s1[N];
int main()
{
	fr("cau2.inp");
	fw("cau2.out");

	cin >> s;
	for (int i = 0; i <= s.size() - 3;i++)
	{
		s1[i] = s.substr(i, 3);
		bool k = true;
		for (int j = 0; j < i;j++)
		if(s1[i] == s1[j])
			k = false;
		if(k)
			cout << s1[i] << endl;
	}
	return 0;
}