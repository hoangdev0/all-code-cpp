#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
const int N =1e2+50;
string s;
int d(0),a[N];
int main()
{
	// fr("bai7.inp");
	// fw("bai7.out");
	memset(a, 0, N);
	cin >> s;
	For(i, 0, s.size() - 1, 1)
	{
		a[s[i]]++;
	}
	For(i, 0, N, 1)
	{
		if(a[i]>0)
			d++;
	}
	cout << d;
	return 0;
}