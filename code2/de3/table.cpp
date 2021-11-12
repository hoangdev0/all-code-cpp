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
int m, n, k, a, b, c, ma;
int main()
{
	fr("table.inp");
	fw("table.out");

	cin >> n >> m >> k >> a >> b >> c;
	ma = max(n * a, max(m * b, c * k));
	if(n*a == ma)
		cout << "Joffrey ";
	if(m*b == ma)
		cout << "Robb ";
	if (k * c == ma)
		cout << "Stannis ";
	return 0;
}