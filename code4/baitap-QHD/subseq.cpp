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
const int M = 1e9 + 5;
int n, a[N], s[N], dau[N], cuoi[N], x, j(0), k(0), sm(-M), smin(0), smax(-M), d(0);
int main()
{
	fr("subseq.inp");
	fw("subseq.out");

	cin >> n;
	s[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		s[i] = s[i - 1] + a[i];
		
		cout << s[i] << " ";
	}
	cout << endl;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j < i;j++)
		{
			x = s[i] - s[j-1];
			if (smax < x)
			{
				smax = x;
				k = 1;
				dau[k] = j;
				cuoi[k] = i;
			}
			elf(smax == x)
			{
				k++;
				dau[k] = j;
				cuoi[k] = i;
				// cout << smax << " " << k << " " << i << "  " << j << endl;
			}
	}

	cout << smax << " " << k << endl;
	for (int i = 1; i <= k;i++)
	{
		for (int j = dau[i]; j <= cuoi[i];j++)
			cout << a[j] << " ";
		cout << endl;
	}

		return 0;
}