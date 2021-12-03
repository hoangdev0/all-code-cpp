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
int n, t, x;
string s;
void hexa(int n)
{
	s = "";
	if (n < 10)
		cout << n;
	else
		while (n > 0)
		{
			x = n % 16;
			switch (x)
			{
			case 10:
				s = "A" + s;
				break;
			case 11:
				s = "B" + s;
				break;
			case 12:
				s = "C" + s;
				break;
			case 13:
				s = "D" + s;
				break;
			case 14:
				s = "E" + s;
				break;
			case 15:
				s = "F" + s;
				break;
			default:
				s = (char) (x + 48) + s;
				break;
			}
			n /= 16;
		}
	cout << s << "\n";
}
int main()
{
	fr("hexa.inp");
	fw("hexa.out");

	cin >> t;
	while (t--)
	{
		cin >> n;
		hexa(n);
	}
	return 0;
}