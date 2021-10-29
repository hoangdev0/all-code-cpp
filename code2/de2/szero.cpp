#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
// #define nhap(t, n, b)       \
	for (int i = t;i <= n; i++) \
		cin >> b[i];
#define elf else if
typedef unsigned long long ll;
using namespace std;
const int N =1e6+5;
int n,s[N],sum(0),x;
int main()
{
	
	fr("szero.inp");
	fw("szero.out");
	cin >> n;
	
	For(i, 1, n, 1) 
	{
		cin >> x;
		sum+=x;
		s[i] = sum; 
	}
	
	
	return 0;
}