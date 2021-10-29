#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int n,t,x(0);
ll d(0);
string s,s1,s2;
int main()
{
	fr("coding.inp");
	fw("coding.out");

	cin >> s;
	t = s.size() - 1;

	for (int i = t; i >= 0;i--)
	{
		d += ((int)s[i]-48) * pow(2, x);
		x++;
	}
	// cout << d << endl;
	d *= 17;
	while(d>0)
	{
		if(d%2==1)
			s1 = '1' + s1;
		else
			s1 = '0' + s1;
		d /= 2;
	}
	cout << s1;
	return 0;
}