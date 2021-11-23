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
int n;
string s, x;
bool check(int i)
{

	int k = 1;
	string t = s.substr(0, i);
	if (s.find(t, k) != -1)
		return false;
	for (int j = i + 1; j <= n; j++)
	{
		t += s[j];
		t.erase(0, 1);
		if (s.find(t, k) != -1)
			return false;
		k++;
	}
	return true;
}
void raphael()
{
	int l = 1, r = n,res;
	while(l<=r)
	{
		int g = (r + l) / 2;
		if(check(g))
		{
			res = g;
			r = g - 1;
		}else
			l = g + 1;
	}
	cout << res;
}
int main()
{
	fr("diffsstr.inp");
	fw("diffsstr.out");

	cin >> n >> s;
	raphael();

	return 0;
}