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
string s;
int sum(0);
int main()
{
	fr("tongchuso.inp");
	fw("tongchuso.out");
	cin >> s;
	For(i, 0, s.size() - 1, 1)
		sum += (int)s[i] - 48;
	cout << sum;
	return 0;
}