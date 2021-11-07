#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e6 + 5;
int n, a[N], d(0),s(1);
bool cm(int a, int b)
{
	return a > b;
}
int main()
{
	fr("capso.inp");
	fw("capso.out");

	cin >> n;
	For(i, 0, n - 1, 1) cin >> a[i];
	sort(a, a + n, cm);
	For(i, 0, n - 1, 1)
	{
		if(a[i] == a[i+1])
			s++;
		else if (s > 1)
		{
			// s += s;
			d += (int)s*(s-1)/2;
			s = 1;                                                                         
		} 
	}
	cout << d;
	return 0;
}