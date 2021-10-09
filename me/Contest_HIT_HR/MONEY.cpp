#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;

int n;

int main()
{
	fr("MONEY.INP");
	fw("MONEY.OUT");
	while (cin >> n)
	{
		cout << max(n, ((int)(n / 2)+(n/3)+(n/4))) << endl;
	}
	return 0;
}