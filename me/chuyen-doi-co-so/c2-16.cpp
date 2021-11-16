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
string s, s1,t;
int main()
{
	// fr(".inp");
	// fw(".out");

	cin >> s;

	int d = (s.size()) % 4;
	For(i, 1, d, 1) s = '0' + s;
	while(s.size()!=0)
	{
		t = s.substr(0,4);
		s.erase(0,4);
		if(t=="0000") s1+='0';
		elf(t == "0001") s1+='1';
		elf(t == "0010") s1 += '2';
		elf(t == "0011") s1 += '3';
		elf(t == "0100") s1 += '4';
		elf(t == "0101") s1 += '5';
		elf(t == "0110") s1 += '6';
		elf(t == "0111") s1 += '7';
		elf(t == "1000") s1 += '8';
		elf(t == "1001") s1 += '9';
		elf(t == "1010") s1 += 'A';
		elf(t == "1011") s1 += 'B';
		elf(t == "1100") s1 += 'C';
		elf(t == "1101") s1 += 'D';
		elf(t == "1110") s1 += 'E';
		elf(t == "1111") s1 += 'F';
	}
	while (s1[0] == '0')
		s1.erase(0, 1);

	cout << s1;

	return 0;
}