#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N =1e6+5;
int a[N], f[N], n,t[N],d[N];
int main()
{
	fr("day-tang.inp");
	fw("day-tang.out");

	cin >> n;
	For(i,1,n,1) cin >> a[i];

	a[0] = -N;
	a[n + 1] = N;
	f[0] = 1;
	t[0] = 0;

	for (int i = 1; i <= n+1;i++)
	{
		f[i] = 1;
		for (int j = 0; j < i;j++)
			if(a[i]>a[j])
			{
				f[i] = max(f[i], f[j] + 1);
				t[i] = j;
			}
	}
	int i = t[n + 1],j(f[n+1]-2);
	while(i > 0)
	{
		d[j] = a[i];
		i = t[i];
		j--;
	}
	cout << f[n + 1] - 2 << endl;
	for (int i = 1; i <= (f[n + 1] - 2);i++)
		cout << d[i] << " ";
		
	return 0;
}