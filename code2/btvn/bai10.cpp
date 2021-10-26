#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
const int N =1e2+50;
string s;
int d(0);
int main()
{
	// fr("bai9.inp");
	// fw("bai9.out");
	getline(cin, s);
	For(i,0,s.size()-1,1)
	{
		if(s[i]>=65 && s[i] <=90)
			s[i] += 32;
		else
			s[i] -= 32;
	}
	cout << s;
	return 0;
}