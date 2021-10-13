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
	int d = 2, i;
	bool k(true);
	long long s;
	for (i = 2; i * i <= n; i++)
	{
		for(int j = i+1; j*j <=n;j++)
		{
			if(c[i])
			{
				if (c[j])
				{
					s = i * i + j * j;
					if (c[s] && s < n)
						cout << i << " " << j << " " << s << endl;
					k = false;
				}
			}else
				break;
		}
	}
	if(!k)
		cout << -1;
}
int main()
{
	eth();
	fr("dprime3.inp");
	fw("dprime3.out");

	cin >> n;
	nt(n);
	return 0;
}