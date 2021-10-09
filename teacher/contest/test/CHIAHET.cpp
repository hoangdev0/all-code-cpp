#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int k(1),n,m;
long long s(1);

int main()
{
	fr("CHIAHET.inp");
	fw("CHIAHET.out");
	cin >> n >> m;
	For(i,2,n,1)
	{
		s *= i;
	}
	while (s % (long long)pow(m, k) == 0)
	k++;
	
	cout << k;
	return 0;
}