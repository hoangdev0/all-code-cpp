#include <bits/stdc++.h>
#define N 1000
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int n;
int main()
{
	fr("bzero.inp");
	fw("bzero.out");
	cin >> n;
	cout << n / 5;
	return 0;
}