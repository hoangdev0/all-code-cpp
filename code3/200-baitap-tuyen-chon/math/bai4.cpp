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
int t;
ll n;
int main()
{
	fr("bai4.inp");
	fw("bai4.out");

	cin >> t;
	for (int i = 1;i<=t;i++)
	{
		cin >> n;
		int d = 0;
		while(n>0)
		{
			d += (n % 2);
			n /= 2;
		}	
		if(d%2)
			cout << "odd" << endl;
		else
			cout << "even"<<endl;
	}
		return 0;
}