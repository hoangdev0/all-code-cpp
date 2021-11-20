#include<bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name,"r",stdin);
#define fw(name) freopen(name,"w",stdout);
#define For(value,begin,end,up) for(int value = begin;value <= end;value+=up)
// #define Forl(value,begin,end,up) for(int value = begin;value >= end;value-=up)
#define elf else if
// typedef unsigned long long ll
using namespace std;
int a, b, c, d, t, m;
int mau(int a, int b)
{
	if(a == 0 || b == 0)
		return -1;
	return ((a * b) / __gcd(a, b));
}
void toigian()
{	
	int x = __gcd(t,m);
	t/=x;
	m /= x;
}
int main()
{
	fr("bai1.inp");
	fw("bai1.out");
	cin >> a >> b >> c >> d;

	m = mau(b, d);
	if(m == -1) 
	{
		cout << m;
		return 0;
	}
	t = (a * (m / b)) + (c * (m / d));
	toigian();
	cout << t << " " << m;

	return 0;
}