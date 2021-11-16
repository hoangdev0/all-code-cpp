#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
typedef unsigned long long ll;
// const int N =1e6+5;
using namespace std;
string s;
int n,m;
int main()
{
	// fr(".inp");
	// fw(".out");

	cin >> n;
	while(n>0)
	{
		m = n % 16;
		switch (m)
		{
		case 10:
			s = 'A' + s;
			break;
		case 11:
			s = 'B' + s;
			break;
		case 12:
			s = 'C' + s;
			break;
		case 13:
			s = 'D' + s;
			break;
		case 14:
			s = 'E' + s;
			break;
		case 15:
			s = 'F' + s;
			break;
		
		default:
			s = (char)(m + 48) + s;
			break;
		}
		n /= 16;
	}
	cout << s;
	return 0;
}