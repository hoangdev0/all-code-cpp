#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 4e2 + 5;
int n, d(1), dau[N], cuoi[N], m(0);
string s, s1;
bool kt(int l, int r)
{
	if ((r-l+1) < 2 || (r-l+1) % 2 != 0)
		return false;
	s = s1.substr(l, r - l + 1);
	int k = s.size();
	for (int i = 1; i <= (k / 2); i++)
		if (i % 2 == 1 && s[i - 1] != s[(k - i)])
			return false;
		elf(i % 2 == 0 && s[i - 1] == s[(k - i)]) return false;
	return true;
}
int main()
{
	fr("bai3.inp");
	fw("bai3.out");

	cin >> n >> s1;

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (s1[i] == s1[j])
			{
				dau[d] = i;
				cuoi[d] = j;
				d++;
			}

	for (int i = 1; i < d; i++)
		if (kt(dau[i], cuoi[i]))
			m = max(m, (cuoi[i] - dau[i] + 1));

	cout << m;
	return 0;
}