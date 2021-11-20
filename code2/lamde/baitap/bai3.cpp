#include <bits/stdc++.h>
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e6 + 5;
string s, x;
int n;
bool kt(string s)
{
	int d(0), n = s.size() - 1;
	if (s[d] == ')' || s[n] == '(')
		return false;
	for (int i = 0; i <= n; i++)
	{
		if (s[i] == '(')
			d++;
		elf(s[i] == ')') d--;
		if (d < 0)
			return false;
	}
	if (d != 0)
		return false;
	return true;
}
int dem(string s)
{
	int n = s.size(), i(2), d(0),k;
	while (i <= n)
	{
		k = 1;
		x = s.substr(0, i);
		if (kt(x) && s.find(x, k) == -1)
				d++;
		k++;
		for (int j = i; j < n; j++)
		{
			x += s[j];
			x.erase(0, 1);
			if (kt(x) && s.find(x, k) == -1) d++;
			k++;
		}
		i += 2;
	}
	return d;
}
int main()
{
	freopen("bai3.inp", "r", stdin);
	freopen("bai3.out", "w", stdout);
	cin >> n;
	for(int i = 1;i<=n;i++)
	{
		cin >> s;
		cout << dem(s) << endl;
	}

	return 0;
}