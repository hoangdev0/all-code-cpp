#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
// const int N =1e6+5;
int d(0),res(0),n,x;
string s;
int main()
{
	fr("dem_tu.inp");
	fw("dem_tu.out");

	while(cin >> s)
	{
		for (int i = 0; i < s.size();i++)
		if(s[i] >= '0' && s[i] <= '9') 
		{
			res++;
			break;
		}
	}

	cout << res;

	return 0;
}