#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int n, s;
int main()
{
	fr("password.inp");
	fw("password.out");
	
	cin >> n >> s;
	if(9*n < s) cout << -1;
	else{
		For(i,1,n,1)
		{
			if (s >= 9)
			{
				cout << 9;
				s -= 9;
			}
			else
			{
				if (s == 0)
					cout << 0;
				else
				{
					cout << s;
					s = 0;
				}
			}
		}
	}
	return 0;
}