#include <bits/stdc++.h>
// #define N 1e4 + 5
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
const int N = 1e4 + 5;
int n;
struct to
{
	int a;
	int b;
};
bool cmp(to x,to y)
{
	return x.b < y.b;
}
int t(int n)
{
	int s(0);
	while(n>0)
	{
		s += n % 10;
		n /= 10;
	}
	return s;
}
to a[N];
int main()
{
	fr("bai3.inp");
	fw("bai3.out");

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].a;
		a[i].b = t(a[i].a);
	}
	sort(a + 1, a + n + 1,cmp);
	for (int i = 1;i <= n;i++)
	{
		cout << a[i].a << " ";
	}
	return 0;
}