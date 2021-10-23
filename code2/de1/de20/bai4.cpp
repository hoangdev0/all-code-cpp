#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
const int N = 1e6 + 5;
int n, r,a[N],t,d(0);
int main()
{
	fr("bai4.inp");
	fw("bai4.out");

	cin >> n >> r;
	For(i, 1, n, 1)
		cin >>a[i];
	For(i, 1, n, 1)  
	if (a[i] - a[1] >= r)
	{
		t = i;
		break;
	}
	
	For(i,1,t,1)
	{
		For(j, t + 1, n, 1)
		{
			if(a[j]-a[i] >= r)
				d++;
		}
	}
	cout << d;
	return 0;
}