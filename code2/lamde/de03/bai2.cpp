#include <bits/stdc++.h>
using namespace std;
string s, s1;
char t ='1';
int main()
{
	freopen("bai2.inp", "r", stdin);
	freopen("bai2.inp", "w", stdout);
	while (getline(cin, s))
	{
		int i(0);
		while (i <s.size())
		{
			if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 95 && s[i] <= 122))
				if (s[i] != t)
				{
					t = s[i];
					cout << t;
				}
			i++;
		}
		cout << endl;
	}

	return 0;
}