#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e6 + 5;
int n, m, x, c[N], y(0);
bool a[N];
void sang()
{
	fill(a + 2, a + N, true);
	a[0] = false;
	a[1] = false;
	Forc(i, 2, N, 1) if (a[i]) For(j, (i * i), N, i) a[j] = false;
}
int main()
{
	fill(c + 2, c + N, 0);
	sang();
	cin >> n;
	For(i, 1, n, 1)
	{
		cin >> x;
		y = max(x, y);
		For(j, 2, x, 1)
		{
			if (a[j] && x % j == 0)
			{
				while (x % j == 0)
				{
					c[j]++;
					x /= j;
				}
			}
		}
	}
	For(i, 2, y, 1) if (c[i] > 1) m = max(m, c[i]);
	cout << m;

	return 0;
}