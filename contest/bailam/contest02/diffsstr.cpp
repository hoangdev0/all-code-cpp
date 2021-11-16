#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
#define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e6 + 5;

int n;
string s,s1[N];
bool kt(int g)
{
	// bool k = true;
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
	return true;
};
void solve()
{
	int l = 1, r = n, res(0);
	while (l <= r)
	{
		int g = (r + l) / 2;
		if (kt(g))
		{
			res = g;
			r = g - 1;
		}
		else
			l = l + 1;
	}
	cout << res;
}
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

	solve();
	return 0;
}