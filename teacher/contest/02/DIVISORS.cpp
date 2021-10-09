#include <bits/stdc++.h>
#define N 100000002
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
bool a[N];
void magic()
{
	memset(a,true,N);
	For(i,1,10000,2)
	{
		if(a[i])
		{
			For(j,i+i,N,i)
			{
				a[j] == false;
			}
		}
	}
}

int main()
{
	fr("DIVISORS.INP");
	fw("DIVISORS.OUT");
	magic();
	int n,d=0;
	cin >> n;
	
	return 0;
}