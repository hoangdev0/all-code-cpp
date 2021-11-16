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
int n;
ll m;
void test()
{
	fw("cs10-cs2.inp");
	srand(time(NULL));
	int x = rand() + 16;
	cout << x;
}
int main()
{
	test();
	fr("cs10-cs2.inp");
	fw("cs10-cs2.out");

	string s;
	
	cin >> n;

	while(n>0)
	{
		s = (char)(n % 2 + 48) + s;
		n /= 2;
	}
	while(s[0]=='0')
		s.erase(0, 1);
	cout << s;
	return 0;
}