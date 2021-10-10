#include <bits/stdc++.h>
#define N 1000
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int n,d(0);
int main()
{
	fr("bzero.inp");
	fw("bzero.out");
	cin >> n;
	For(i,5,n,5)
	{
		if(i%25 ==0)
		{
			int x = i;
			while(x == 1)
			{
				x /= 5;
				d++;
			}
		}else
			d++;
	}
	return 0;
}