#include <bits/stdc++.h>
// #define N 3205
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int n,a,b;
void nt(long long n)
{
	int d = 2, i;
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		d+=2;
	}
	i--;
	if (i * i == n)
		d--;
	cout << d << endl;
}
int main()
{
	fr("uocso.inp");
	fw("uocso.out");

	cin >> n;
	For(i,1,n,1) 
	{
		cin >> a >> b;
		nt(a*b);
	}
	return 0;
}