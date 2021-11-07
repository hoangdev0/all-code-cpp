#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N =1e2+5;
int a[N], m, n, s;
bool cm(int a, int b)
{
	return a > b;
}
int main()
{
	fr("election.inp");
	fw("election.out");
	cin >> n >> m;
	if(m==1)
	{
		cout << 0;
		return 0;
	}
	For(i, 1, n, 1) cin >> a[i];
	sort(a + 1, a + n + 1, cm);
	s = a[1];
	For(i,2,n,1)
	{
		if(s >= m) 
		{
			cout << i-1;
			return 0;
		}
		s += a[i] - 1;
		if(a[i]<=1) 
		{
			cout << -1;
			break;
		}
	}
	return 0;
}