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
int a[N];
void sangnt()
{
	fill(a + 1, a + N + 1, true);
	for (int i = 2; i * i <= N; i++)
		if (a[i])
			for (int j = 2 * i; j <= N; j += i)
				a[j] = false;
}
int main()
{
	// fr(".inp");
	// fw(".out");
	fill(a + 1, a + N + 1, 0);
	int i = 2;
	for (i; i <= n; i++)
		if (n % i == 0)
			while (n % i == 0)
			{
				n /= i;
				a[i]++;
			}
	for (int j = 2; j < i; j++)
		if (a[j] > 0)
			cout << j << " ^ " << a[j] << " * ";

	return 0;
}