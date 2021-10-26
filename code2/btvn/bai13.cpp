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
ll d(0);
string s;
int main()
{
	// fr("bai12.inp");
	// fw("bai12.out");
	cin >> d;
	while(d>0)
	{
		s = (char)((d % 10) + 48) + s;
		d /= 10;
	}
	cout << s;
	return 0;
}