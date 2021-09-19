#include <bits/stdc++.h>

#define N 100005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forl(value,begin,end,up) for(int value = begin;value >= end;value-=up)
#define elf else if
// typedef unsigned long long ll

using namespace std;

int n, a[N], mi(N * 10000), d;
string s;

int main()
{
	fr("NUCLEAR.inp");
	fw("NUCLEAR.out");
	bool k = false;
	cin >> n >> s;
	if (s.find('R') == -1 || s.find('L') == -1 || n % 2 == 1)
	{
		For(i, 1, n, 1) cin >> a[i];
		For(i, 0, n - 2, 1)
		{
			if (s[i] == 'R')
			{
				For(j, i + 1, n - 1, 1)
				{
					k = true;
					int m = ceil((float)abs(a[i + 1] - a[j + 1]) / 2);
					if (m != 0)
						mi = min(m, mi);
				}
			}
		}
	}
	if (k)
		cout << mi;
	else
		cout << -1;
	return 0;
}