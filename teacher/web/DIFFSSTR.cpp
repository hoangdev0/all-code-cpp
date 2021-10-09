#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// typedef unsigned long long ll;
using namespace std;

int n;
string s, s1, s2;

int main()
{
	fr("DIFFSSTR.inp");
	fw("DIFFSSTR.out");
	cin >> n;
	cin >> s;
	s1 = s;
	For(i, 1, n, 1)
	{
		bool k = true;
		int x = abs(n - i);
		For(j, 0, x, 1)
		{
			s = s1;
			s2 = s.substr(j, j + i);
			s.erase(j, j + 1);
			int d = s.find(s2);
			if (d != -1)
			{
				k = false;
				break;
			};
		}
		if (k == true)
		{
			cout << i;
			return 0;
		}
	}
	return 0;
}