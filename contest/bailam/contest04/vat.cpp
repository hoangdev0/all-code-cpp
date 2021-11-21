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
double n, x;
int main()
{
	fr("vat.inp");
	fw("vat.out");

	cin >> n;
	x = (double)n / 1.1;
	cout << fixed << setprecision(2) << x << " " << (n - x);

	return 0;
}