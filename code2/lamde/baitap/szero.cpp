#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e6 + 5;
int n, a[N], x;
ll s(0);
struct sz{
	int s;
	int i;
};
bool cm(sz a,sz b)
{
	return (a.s < b.s||a.i<b.i);
}

void solve()
{
	sort(a + 1, a + n + 1, cm);
	int ma(0),d(0),c(0);
	for (int i = 1; i <= n;i++)
	{
		int r = binary_search(a + 1, a + n + 1, a[i].s);
	}
}
int main()
{
	fr("szero.inp");
	fw("szero.out");

	cin >> n;
	a[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		a[i] = (a[i - 1] + x);
	}
	for (int i = 1; i <= n; i++)
		cout << a[i] << " ";
	cout << endl;

	

	return 0;
}