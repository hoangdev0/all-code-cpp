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
int main()
{
	fr("cau1.inp");
	fw("cau1.out");

	cin >> s;
	for (int i = 0; i <= s.size() - 3;i++)
		cout <<s.substr(i,3) << endl;
	return 0;
}