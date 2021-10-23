#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int d(0);
string s;
int main()
{
	fr("bai2.inp");
	fw("bai2.out");

	while(cin >>s)
	{
		for (int i = 0; i <= s.length() - 1;i++)
		{
			if(s[i] >=48 && s[i] <= 57)
			{
				d++;
				break;
			}
			
		}
	}
	cout << d;
	return 0;
}