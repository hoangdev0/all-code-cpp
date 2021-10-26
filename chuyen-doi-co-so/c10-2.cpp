#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
typedef unsigned long long ll;
// const int N =1e6+5;
int n;
ll m;
using namespace std;

int main()
{
	// fr(".inp");
	// fw(".out");

	string s;
	
	cin >> n;

	while(n>0)
	{
		s = (char)(n % 2 + 48) + s;
		n /= 2;
	}
	while(s[0]=='0')
		s.erase(0, 1);
	cout << s;
	return 0;
}