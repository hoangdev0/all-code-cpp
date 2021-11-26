#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N =60;
int n, a[N], x;
long long f[N];
void fibo()
{
	f[0] = 1;
	f[1] = 1;
	for (int i = 2; i <= N;i++)
		f[i] = f[i - 1] + f[i - 2];
	
}
int main()
{
	fibo();
	fr("fibonacci.inp");
	fw("fibonacci.out");

	cin >> n;
	while (n--)
	{
		cin >> x;
		cout << f[x] << endl;
	}
		return 0;
}