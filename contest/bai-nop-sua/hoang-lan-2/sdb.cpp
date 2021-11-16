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
const int M =1e9+5;
struct sd
{
	int n;
	int i;
};
bool cm(sd a, sd b)
{
	return a.n < b.n;
}
bool cm1(sd a, sd b)
{
	return a.i < b.i;
}
int n,j(1);
sd a[N], c[N];
int main()
{
	fr("sdb.inp");
	fw("sdb.out");

	cin >> n;
	For(i,1,n,1)
	{
		cin >> a[i].n;
		a[i].i = i;
	}
	sort(a + 1, a + n + 1, cm);
	a[0].n = M;
	a[n+1].n = -M;
	For(i,1,n,1)
	{
		if(a[i].n!=a[i-1].n&&a[i].n!=a[i+1].n)
		{
			c[j].n =a[i].n;
			c[j].i = a[i].i;
			j++;
		}
	}
	j--;
	sort(c + 1, c + j + 1, cm1);
	cout << j << endl;
	For(i, 1, j, 1)
			cout
		<< c[i].n << endl;
	return 0;
}