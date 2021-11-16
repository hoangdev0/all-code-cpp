#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
string n;
int s(0);
int main()
{
	fr("tongchuso.inp");
	fw("tongchuso.out");

	cin >> n;
	int l = n.length() - 1;
	For(i, 0, l, 1) s += (int) n[i] - 48;
	cout << s;
	return 0;
}