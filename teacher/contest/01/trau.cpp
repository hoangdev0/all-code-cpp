#include <bits/stdc++.h>

// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forl(value,begin,end,up) for(int value = begin;value >= end;value-=up)
#define elf else if
// typedef unsigned long long ll

using namespace std;

int main()
{
	fr("t.inp");
	fw("t.out");
	int a, b,c,d,q;
	cin >> q;
	For(x,1,q,1)
	{
		cin >> a >> b;
		if (b % 2 == 0 && (b-a)>=2)
			c = b - 1;
		else
		{
			c = b;
			b++;
		};
		if (b / 2 > a)
			d = b / 2;
		else
			d = a;
		cout << (int) c % d << endl;
	}
	return 0;
}