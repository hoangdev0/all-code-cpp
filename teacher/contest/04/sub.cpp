#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int a, b, c, d;
int sub(int n, int s)
{
	int j, i;
	while(n > 0)
	{
		j = s % 10;
		s /= 10;
		i = n % 10;
		n /= 10;
		if(j != i)
			break;
	}
	return i;
}
int main()
{
	fr("sub.inp");
	fw("sub.out");

	cin >> a >> b >> c;
	d = a - b;
	cout << sub(c, d);
	return 0;
}
