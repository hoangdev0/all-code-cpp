#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e5 + 5;
int n, k,d(1),j(1),i(1), res(0);
bool a[N];
int main()
{
	fr("xoa_so_tren_vong_tron.inp");
	fw("xoa_so_tren_vong_tron.out");

	cin >> n;

	fill(a+1,a+n+1,true);
	k = n;
	while(k>1)
	{
		i++;
		if(i>n)
			i = 1;
		if(a[i]) d++;
		if(d == 3)
		{
			k--;
			a[i] = false;
			// cout << i << " ";
			d=1;
			i++;
			while(!a[i])
			{
				i++;
				if(i>n) i = 1;
			}
		}
	}
	// cout << "\n";
	
	for (int i = 1;i<=n;i++)
		if(a[i])
		{
			cout << i;
			break;
		}

	return 0;
}