#include <bits/stdc++.h>
#define N 3205
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
void nt(int n)
{
	int d = 2,i;
	for (i = 2; i*i<=n;i++)
	{
		if(n%i==0)
		{
			if(c[i] || c[n/i])
				d += 1;
			else
				d += 2;
		}
	}
	i--;
	if(i*i==n)
		d--;
	cout << d;
}
int main()
{
	eth();			   
	fr("knto.inp"); 
	fw("knto.out");

	cin >> n;
	nt(n);
	return 0;
}