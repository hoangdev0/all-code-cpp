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
string s,s1,t;
ll n(0);
int l,x;
int main()
{
	// fr(".inp");
	// fw(".out");
	cin >> s;
	l = s.length() - 1;
	For(i,0,l,1)
	{
		if(s[i] >= 'A' && s[i] <= 'F') n += (int)(s[i]-55)*pow(16,l-i);
		else
			n += (int)(s[i] - 48) * pow(16, l - i);
	}
	cout << n;
	return 0;
}