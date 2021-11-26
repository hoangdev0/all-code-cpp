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
string s, x,r;
int n;
int main()
{
	fr("sdb.inp");
	fw("sdb.out");

	cin >> n;
	while (n--)
	{
		cin >> x;
		s = s + '\n' + x;
	}
	s.erase(0, 1);
	int i = 0, l = s.size(),d(0);
	
	x = s.substr(i, s.find(' ',i+1) - 1);
	if(s.find(x, i + 1)==-1);
	{
		r += '\n' + x;
		d++;
	}
	for (int i = 1; i <= n;i++)
	{
		
	}
		cout << s.size() / 2 << endl;
	cout << s;
	return 0;
}