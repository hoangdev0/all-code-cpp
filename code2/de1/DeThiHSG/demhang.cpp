#include <bits/stdc++.h>
#define N 1000003
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int n,x;
// string s[N],s1;
int a[N],m(0),v(0);
int main()
{
	fr("demhang.inp");
	fw("demhang.out");
	cin >> n;
	for(int i = 1;i<=n;i++)
	{
		cin >> x;
		if(x<=N) a[x]++;
	}
	for(int i = 1;i<=N-3;i++) 
	{
		if(a[i] > m) 
		{
			m = a[i];
			v = i;
		}
	}
	cout << v << " " << m;
	return 0;
}