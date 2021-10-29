#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int n, res = 0;
	cin >> s;
	n = s.size();
	s = s + s;
	for (int i = 0; i <= n - 1; i++)
	{
		bool kt=true;
		int d = i;
		int c = n - 1 + i;
		while (d < c)
		{
			if (s[d] != s[c])
			{
				kt = false;
				break;
			}
			d++;
			c--;
		}
		if (kt == true)
			res++;
	}
	cout << res;
	return 0;
}