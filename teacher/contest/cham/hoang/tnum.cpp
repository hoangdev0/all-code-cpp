#include <bits/stdc++.h>
#define N 10000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (long long value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
bool c[N];
long long n,x,s;
void eth()
{
	memset(c, true, N);
	c[0] = false;
	c[1] = false;
	for (long long i = 2; i * i <= N; i++)
		if (c[i])
			For(j, i * i, N, i) c[j] = false;
}
// bool tnum(long long n)
// {
// 	long long i = sqrt(n);
// 	if(i*i==n)
// 	{
// 		if (c[i])
// 			return true;
// 	}
// 	return false;
	
// }
int main()
{
	eth();
	fr("tnum.inp");
	fw("tnum.out");

	cin >> n;
	For(i,1,n,1)
	{
		cin >> x;
		s = sqrt(x);
		if(s*s==x)
		{
			if (c[s])
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}else
			cout << "NO" << endl;
		}
	return 0;
}