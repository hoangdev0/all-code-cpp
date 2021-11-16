#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
#define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
// const int N =1e6+5;
/*
string s1[N];
	int d(1);
	for (int i = 0; i <= s.size() - g; i++)
	{
			s1[d] = s.substr(i, g);
			d++;
	}
	for (int i = 1; i < d; i++)
	{
		for (int j = 1; j < i; j++)
			if (s1[i] == s1[j])
				return false;
	}
*/
int n, d, x;
string s;
bool k;
int main()
{
	// test();
	fr("diffsstr.inp");
	fw("diffsstr.out");
	cin >> n >> s;
	if (n == 1)
	{
		cout << 1;
		return 0;
	}
	int i(0);
	for (i; n - 1; i++)
	{
		k = true;
		x = abs(n - i);
		For(j, 0, x, 1)
		{
			d = s.find(s.substr(j, j + i), j + 1);
			if (d != -1)
			{
				k = false;
				break;
			}
		}
		if (k == true)
		{
			cout << i;
			return 0;
		}
	}
	if (i == n)
		cout << n;
	elf(i == 0)
			cout
		<< i;
	return 0;
}