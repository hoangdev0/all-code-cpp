#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = (1e6+5);
const long long M = 1e7+6;
// void test()
// {
// 	fw("thuong.inp");
// 	srand(time(NULL));
// 	int n = 19;
// 	For(i, 1, n, 1) cout << 1 + rand() % 10;
// }
struct th
{
	int n;
	int i;
};

int m, n, x;
th a[N];
th b[N];
bool cm(th x, th y)
{
	return x.n < y.n;
}
bool cm1(th x, th y)
{
	return x.i < y.i;
}

int main()
{
	// test();
	fr("thuong.inp");
	fw("thuong.out");
	
	cin >> n >> m;
	
	for(int i = 1;i<=n;i++)
	{
		cin >> a[i].n;
		a[i].i = i;
	}
	
	for(int i = 1;i<=m;i++)
	{
		cin >> b[i].n;
		b[i].i = i;
	}
	// sort(a + 1, a + n + 1, cm);

	sort(b + 1, b + m + 1, cm);

	for (int i = 1; i <= n;i++)
	{
		if(!binary_search(b+1,b+m+1,a[i].n))
			cout << a[i].n << " ";
	}

	// sort(a + 1, a + n + 1, cmp1);
	// for (int i = 1; i <= n;i++)
	// if(a[i].n>0)
	// 	cout << a[i].n << " ";

		return 0;
}