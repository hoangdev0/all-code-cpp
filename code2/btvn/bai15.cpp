#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
const int N =1e2+50;
ll s,x;
string d="";
int main()
{
	// fr("bai12.inp");
	// fw("bai12.out");
	cin >> s;
	while(s>0)
	{
		x = s%16;
		switch(x)
		{
			case 10:
				d = "A" + d;
				break;
			case 11:
				d = "B" + d;
				break;
			case 12:
				d = "C" + d;
				break;
			case 13:
				d = "D" + d;
				break;
			case 14:
				d = "E" + d;
				break;
			case 15:
				d = "F" + d;
				break;
			default :
				d = ((char)(x + 48)) + d;
		}
		s /= 16;
	}
	cout << d;
	return 0;
}