#include <bits/stdc++.h>

// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forl(value,begin,end,up) for(int value = begin;value >= end;value-=up)
#define elf else if
// typedef unsigned long long ll

using namespace std;

int n;

int main()
{
	fr("CAN2.inp");
	fw("CAN2.out");
	cin >> n;
	if (sqrt(n) - round(sqrt(n)) == 0)
		cout << sqrt(n) << " " << 1;
	else
	{
		int d = n/2;
		For(i, 2, d, 1)
		{
			if (n % i == 0)
			{
				int x = n / i;
				if (round(sqrt(x)) - sqrt(x) == 0)
				{
					cout << sqrt(x) << " " << i;
					return 0;
				}
			}
		}
		cout << 1 << " " << n;
	}
	return 0;
}