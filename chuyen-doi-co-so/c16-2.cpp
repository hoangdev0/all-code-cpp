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
string s, s1;
int main()
{
	// fr(".inp");
	// fw(".out");

	cin >> s;
	For(i,0,s.length()-1,1)// A 65 66 67 68 69 70 
	{
		switch (s[i])
		{
		case 'A':
			s1 += "1010";
			break;
		case 'B':
			s1 += "1011";
			break;
		case 'C':
			s1 += "1100";
			break;
		case 'D':
			s1 += "1101";
			break;
		case 'E':
			s1 += "1110";
			break;
		case 'F':
			s1 += "1111";
			break;
		case '0':
			s1 += "0000";
			break;
		case '1':
			s1 += "0001";
			break;
		case '2':
			s1 += "0010";
			break;
		case '3':
			s1 += "0011";
			break;
		case '4':
			s1 += "0100";
			break;
		case '5':
			s1 += "0101";
			break;
		case '6':
			s1 += "0111";
			break;
		case '7':
			s1 += "1000";
			break;
		case '9':
			s1 += "1001";
			break;
		}
	}
	while (s1[0]=='0') s1.erase(0, 1);
	
	
	cout << s1;

	
	return 0;
}