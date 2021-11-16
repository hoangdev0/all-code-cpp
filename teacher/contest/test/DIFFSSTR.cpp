#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// typedef unsigned long long ll;
using namespace std;

int n, d, x, t;
bool k;
string s;

int main()
{
	fr("DIFFSSTR.inp");
	fw("DIFFSSTR.out");
	cin >> n;
	cin >> s;
	// s1 = s;
	For(i, 1, n - 1, 1)
	{
		k = true;
		x = abs(n - i);
		For(j, 0, x, 1)
		{      
			// s = s1;
			d = s.find(s.substr(j, j + i), j + 1);
			if(d != -1)
			{
				k = false;
				break;
			}
		}
		if(k == true)
		{
			cout << i;
			return 0;
		}
	}
	return 0;
}