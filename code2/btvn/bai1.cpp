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
int main()
{
	// fr("bai1.inp");
	// fw("bai1.out");

	cin >> s;
	while(s.find('A') != -1 || s.find('a') != -1)
	{
		int i;
		if (s.find('A')!= -1)
			i = s.find('A');
		else
			i = s.find('a');
		s.erase(i, 1);
	}
	cout << s;
	return 0;
}