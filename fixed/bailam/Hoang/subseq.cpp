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
int n, s[N], x, sm(-N), smin(N), smax(-N), d(0);
int main()
{
	fr("subseq.inp");
	fw("subseq.out");

	cin >> n;
	s[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;

		s[i] = s[i - 1] + x;

		if (x < 0)
		{
			d++;
			sm = max(sm, x);
		}
		if (s[i] < 0)
			s[i] = 0;
	}
	if (d == n)
	{
		cout << sm;
		return 0;
	}
	for (int i = 1; i <= n; i++)
	{
		smin = min(s[i], smin);
		smax = max(smax, s[i] - smin);
		// cout << s[i] << " " << smax << " " << smin << endl;
	}

	cout << smax;
	return 0;
}