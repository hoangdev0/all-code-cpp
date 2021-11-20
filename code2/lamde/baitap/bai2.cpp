#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e6 + 5;
int n, d, c, ma(0), k;
string s, s1, res;
int main()
{
	fr("bai2.inp");
	fw("bai2.out");

	cin >> s1 >> k;
	// cin >> k;
	For(i, 0, s1.size() - 1, 1) if (s1[i] >= '0' && s1[i] <= '9')
		s += s1[i];

	n = s.size();
	d = 0;
	c = k;

	while (c != 0)
	{
		int ma(0), v;
		for (int i = d; i <= n - c; i++)
		{
			if (ma < (s[i] - 48))
			{
				ma = (int)(s[i] - 48);
				d = i + 1;
			}
		}
		res += (char)(ma + 48);
		c--;
	}
	cout << res << endl;
	return 0;
}