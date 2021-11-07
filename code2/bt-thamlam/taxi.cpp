#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N =1e6+5;
int n, s(0),a[N],d(0);
int main()
{
	fr("taxi.inp");
	fw("taxi.out");

	cin >> n;
	For(i, 1, n, 1) cin >> a[i];
	sort(a + 1, a + n + 1);
	For(i, 1, n, 1) 
	{
		s += a[i];
		if ((s == 4) || (s + a[i + 1] >= 4))
		{
			d++;
			s = 0;
		}
		// cout << s << endl;
	}

	cout << d;
	return 0;
}