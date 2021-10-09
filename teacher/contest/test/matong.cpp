#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
const int N = 1e6 + 2;
using namespace std;
int a[N], n, x;
long long s(0);
void firt(){
	fill(a + 1, a + 1 + N, 1);
	for (int i = 2; i * i <= N; i++)
	{
		a[i]++;
		for (int j = 2 * i; j <= N; j += i)
			a[j]++;
	}
}
int main()
{
	firt();
	fr("matong.inp");
	fw("matong.out");
	cin >> n;
	For(i, 1, n, 1)
	{
		cin >> x;
		s += x * a[x];
	}
	cout << s;
	return 0;
}