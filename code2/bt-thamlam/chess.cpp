#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e2 + 5;
int a[N], j(0), n, d(0), b[N];
bool cm(int a, int b)
{
	return a > b;
}
int main()
{
	fr("chess.inp");
	fw("chess.out");
	cin >> n;
	For(i, 1, n, 1) cin >> a[i] >> b[i];
	sort(b + 1, b + n + 1);
	sort(a + 1, a + n + 1, cm);
	for (int i = n; i >= 1;i--)
		if (a[i] > b[n])
		{
			j = i;
			break;
		}
	sort(a +j+ 1, a + n + 1);
	For(i, 1, n, 1) 
	{
		if(b[i]>a[i])
			d += 2;
		elf(b[i] == a[i]) d++;
	}
	cout << d;
	return 0;
}