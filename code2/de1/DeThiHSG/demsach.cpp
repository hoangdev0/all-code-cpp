#include <bits/stdc++.h>
#define N 1000003
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int n,a[N],m(1),v,d(1);
int main()
{
	fr("demsach.inp");
	fw("demsach.out");
	cin >> n;
	for(int i = 1;i<=n;i++) cin >> a[i];
	sort(a + 1, a + n + 1);
	for(int i = 1;i<n;i++) 
	{
		if(a[i] == a[i+1]) d++;
		else
		{
			if (d > m)
			{
				m = d;
				v = a[i];
			}
			d = 1;
		}
	}
	cout << v << " " << m;
	return 0;
}