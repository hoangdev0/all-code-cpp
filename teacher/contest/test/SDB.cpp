#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define For2(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
const int N = 1e6 + 3;
const int M = 1e9 + 3;
int n, d(0);

struct db{
	int n;
	int x;
};

db a[N],b[N];

bool dbx(db a, db b)
{
	return (a.x < b.x);
}
bool dbn(db a, db b)
{
	return (a.n < b.n);
}

int main()
{
	fr("SDB.inp");
	fw("SDB.out");
	cin >> n;
	For(i, 1, n, 1)
	{
		cin >> a[i].n;
		a[i].x = i;
	}
	sort(a + 1, a + n + 1,dbn);
	a[0].n = -M;
	a[n + 1].n = M;
	For(i, 1, n, 1)
	{
		if (a[i].n != a[i - 1].n && a[i].n != a[i + 1].n)
		{
			d++;
			b[d].n = a[i].n;
			b[d].x = a[i].x;
		}
	}
	sort(b + 1, b + d + 1, dbx);
	cout << d << endl;
	For(i, 1, d, 1)
		{cout<< b[i].n << endl;}
	return 0;
}