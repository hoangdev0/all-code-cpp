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
int n,m,d(0),res(0),x;
int main()
{
	fw("game.inp");
	cout << "5 3";
	fr("game.inp");
	fw("game.out");

	cin >> n >> m;
	res += max(n, m);
	if(max(n,m)==n)
		n--;
	else
		m--;
	res += max(n, m);
	cout << res;
	return 0;
}