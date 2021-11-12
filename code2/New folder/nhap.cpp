#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
// const int N =1e6+5;
int main()
{
	fr("nhap.inp");
	fw("nhap.out");

	int n,d(0),s(0),i(0);
	while(cin >> n)
	{
		if(n == 0)
			break;
		if(n%2!=0)
		{
			if(n%3!=0)
				d++;
		}
		i++;
		s += n;
	}
	cout << d << endl;
	cout << n / i;
	return 0;
}