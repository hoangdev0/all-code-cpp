#include <bits/stdc++.h>
#define N 10000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
bool c[N];
int a, b;
void eth()
{
	memset(c, true, N);
	c[0] = false;
	c[1] = false;
	for (int i = 2; i * i <= N; i++)
		if (c[i])
			For(j, i * i, N, i) c[j] = false;
}
bool snum(int n)
{
	int s = n;
	while(s>0)
	{
		if(!c[s])
			return false;
		s /= 10;
	}
	return true;
}
int main()
{
	eth();
	fr("sprime.inp");
	fw("sprime.out");
	
	cin >> a >> b;
	For(i,a,b,1)
	{
		if(snum(i))
			cout << i << endl;
	}
	return 0;
}