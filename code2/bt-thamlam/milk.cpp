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
int x, n,d(0);
ll s(0);
struct mk{
	int x;
	int y;
};
mk a[N];
bool milk(mk a, mk b)
{
	return a.x < b.x;
}
int main()
{
	fr("milk.inp");
	fw("milk.out");

	cin >> x >> n;
	For(i, 1, n, 1) cin >> a[i].x >> a[i].y;
	sort(a + 1, a + n + 1,milk);
	For(i,1,n,1)
	{
		if(a[i].y >= x)
		{
			s+=(a[i].x * x);
			break;
		}else{
			s += (a[i].x * a[i].y);
			x -= a[i].y;
		}
	}
	cout << s;
	return 0;
}