#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N =1e6+5;
int a[N], t, n, x,res,d;
int main()
{
	fr("min.inp");
	fw("min.out");

	cin >> t;
	For(t1,1,t,1)
	{
		d = 1;
		fill(a + 1, a + N, 0);
		cin >> n;
		For(i, 1, n, 1) 
		{
			cin >> x;
			if(x>0)
				a[x]++;
		}
		sort(a+1, a + d);
		For(i, 1, N, 1) 
		{
			if(a[i]==0)
			{
				cout << i << endl;
				break;
			}
		}
	}


	return 0;
}