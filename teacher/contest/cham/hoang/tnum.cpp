#include <bits/stdc++.h>
#define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
bool c[N];
int n,x;
void eth()
{
	memset(c, true, N);
	c[0] = false;
	c[1] = false;
	for (int i = 2; i * i <= N; i++)
		if (c[i])
			For(j, i * i, N, i) c[j] = false;
}
bool tnum(int n)
{
	float t = sqrt(n);
	if(round(t)-t==0)
	{
		int x = t;
		if (c[x])
			return true;
	}
	return false;
	
}
int main()
{
	eth();
	fr("tnum.inp");
	fw("tnum.out");

	cin >> n;
	For(i,1,n,1)
	{
		cin >> x;
		if(tnum(x)) cout <<"YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}