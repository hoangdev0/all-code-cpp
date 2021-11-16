#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const long long N = 1e6 + 5;
bool a[N];
long long n;
/* void test()
{
	fw("sohoc.inp");
	srand(time(NULL));
	int n = 12;
	For(i, 1, n, 1) cout << (1 + rand() % 9);
} */
bool kt(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}
int main()
{
	// test();
	fr("sohoc.inp");
	fw("sohoc.out");

	cin >> n;
	long long i = (long long)ceil(sqrt(n));
	while (1)
	{
		if (kt(i))
		{
			cout << i * i;
			break;
		}
		i++;
	}
	return 0;
}