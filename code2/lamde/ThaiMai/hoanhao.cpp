#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N =1e7+5;
int a[N],n,x,d(1);
bool c(int n)
{
	if(n == 6 || n == 28 || n == 496||n==8128) return true;
	return false; 
}
int main()
{
	fr("hoanhao.inp");
	fw("hoanhao.out");

	cin >> n;
	for (int i = 1;i<=n;i++)
	{
		cin >> x;
		if(c(x)) 
		{
			a[d] = x;
			d++;
		}
	}
	sort(a+1,a+d);
	for(int i = 1;i<d;i++) cout << a[i] << " ";

	return 0;
}