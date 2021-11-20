#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
// const int N = 1e7 + 5;
int n;
string s = "0", x;
long long res(0), m=1;
void cov(int n)
{
	x = "";
	while(n>0)
	{
		x = (char)(n % 10 + 48) + x;
		n /= 10;
	}
	s += x;
}
void sang()
{
	For(i, 1,50, 1) cov(i);
}

int main()
{
	sang();
	fr("chusothun.inp");
	fw("chusothun.out");

	cin >> n;
	// cout << (10000-10)/(12*60) << endl;
	while(res<=n)
	{
		res+=9*m*(int)pow(10,m-1);
		m++;
	}
	cout << res;
	return 0;
}