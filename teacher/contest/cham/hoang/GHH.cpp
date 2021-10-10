#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
const int N = 1e4 + 5;
int c[N], n, d(0), x;
int no(int n)
{
	int s(0);
	int i;
	for(i=1; i * i <= n;i++)
	if(n % i == 0)
		s += i + n/i;
	i--;
	if(i*i==n)
		s-= i;
	return s;
}
int main()
{
	fr("GHH.INP");
	fw("GHH.OUT");

	cin >> n;
	For(i,1,n,1)
	{
		cin >> x;
		if(2*x <= no(x))
		{
			d++;
			c[d] = x;
		}
	}
	cout << d << endl;
	For(i,1,d,1)
	{
		cout << c[i] << endl;
	}
	return 0;
}