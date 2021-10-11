#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
const int N = 1e4 + 5e3;
int a[N], n, d(0), j;
double s(0);

int main()
{
	fr("sumation.INP");
	fw("sumation.OUT");

	cin >> n;
	For(i, 1, n, 1) cin >> a[i];
	sort(a + 1, a + n + 1);
	For(i, 1, n - 1, 1)
	{
		a[i + 1] += a[i];
		s += ((double)5 / 100 * a[i + 1]);
		For(j, i + 1, n - 1, 1)
		{
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
			else
				break;
		}
	}
	cout << fixed << setprecision(2) << s;
	return 0;
}