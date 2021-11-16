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
string s, s1, t;
ll n(0);
int l, x;
void test()
{
	fw("cs16-cs10.inp");
	srand(time(NULL));
	string t="";
	for (int i = 1; i <= 1000;i++)
	{
		int x = 48 + rand() % (70 - 48 + 1);
		if(x >= 48 && x <=57)
			t += (char)x;
		elf(x >= 65 && x <= 70) t += (char)x;
		// cout << x;
	}
	t.erase(5, t.length() - 1);
	cout << t;
}
int main()
{
	test();
	fr("cs16-cs10.inp");
	fw("cs16-cs10.out");
	cin >> s;
	l = s.length() - 1;
	for (int i = 0; i <= l; i++)
	{
		n *= 16;
		if (s[i] >= 65 && s[i] <= 70)
			n += (int)(s[i] - 55);
		else
			n += (int)(s[i] - 48);
	}
	cout << n;
	return 0;
}