#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e5 + 5;
int n, a[N],x;
bool k(true);
int main()
{
	fr("bai1.inp");
	fw("bai1.out");

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	for (int i = 1; i < n; i++)
	{
		if ((a[i]%2) != (a[i + 1]%2))
			continue;
		k = false;
		break;
	}

	if (k)
		cout << "YES";
	else
		cout << "NO";
}