#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
const int N = 1e5+3;
int n,d(0);
struct lt{
	int a;
	int b;
};
bool clt(lt a,lt b)
{
	return a.a < b.a;
}
lt a[N];
int main()
{
	fr("laptop.inp");
	fw("laptop.out");

	cin>>n;
	For(i, 1, n, 1) cin >> a[i].a >> a[i].b;
	sort(a + 1, a + n + 1, clt);
	For(i, 1, n-1, 1)
	{
		if(a[i].a < a[i+1].a && a[i].b>a[i].a)
			d++;
	}
	cout << d;
	return 0;
}