#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int n;
int fi(int n)
{
	int a = 1, b = 1, c = 1;
	For(i,3,n,1)
	{
		c = a + b;
		b = a;
		a = c;
	}
	return a;
}
int main()
{
	// fr(".inp");
	// fw(".out");
	cin >> n;
	cout << fi(n);
	return 0;
}