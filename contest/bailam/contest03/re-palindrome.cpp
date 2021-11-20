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
string s, x;
bool kt(string s)
{
	int i = 0, j = s.size() - 1;
	while (i < j)
	{
		if (s[i] != s[j])
			return false;
		i++;
		j--;
	}
	return true;
}
int ans(string s)
{
	int i = 1, k(1), n = s.size(), d(0);
	while (i <= n)
	{
		k = 1;
		x = s.substr(0, i);
		if (kt(x) && s.find(x, k) == -1)
			d++;
		k++;
		For(j, i, n - 1, 1)
		{
			x += s[j];
			x.erase(0, 1);
			if (kt(x) && s.find(x, k) == -1)
				d++;
			k++;
		}
		i++;
	}
	return d;
}

int main()
{
	fr("palindrome.inp");
	fw("palindrome.out");

	while (getline(cin, s))
		cout << ans(s) << endl;
	return 0;
}