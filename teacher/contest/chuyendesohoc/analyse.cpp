#include <bits/stdc++.h>
#define N 1005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int n, a[N];
bool c[N];
void eth()
{
	memset(c, true, N);
	c[0] = false;
	c[1] = false;
	for (int i = 2; i * i <= N; i++)
		if (c[i])
			For(j, i * i, N, i) c[j] = false;
}
int main()
{
	eth();
	fill(a + 1, a + 1 + N, 0);
	fr("analyse.inp");
	fw("analyse.out");

	cin >> n;
	For(i, 2, n, 1)
	{
		if (c[i]) a[i]++;
		else{
			int x = i;
			For(j,2,x,1)
			{
				if(c[j])
				while (x % j == 0)
				{
					x /= j;
					a[j]++;
				}

			}
		}
	}
	For(i, 2, n, 1) if (a[i] > 0) cout << a[i] << " ";
	return 0;
}