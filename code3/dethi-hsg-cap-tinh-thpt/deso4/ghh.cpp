#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e6 + 5;
int a[N], n,x,d(0);
int k(int n)
{
	int s = n + 1,i(2);
	for (i; i*i < n;i++)
	{
		if(n%i==0)
			s += i + (n / i);
	}
	if (i * i == n)
		s += i;
	return s;
}
bool kt(int n)
{
	if(2*n<=k(n))
		return true;
	return false;
}
int main()
{
	fr("ghh.inp");
	fw("ghh.out");

	cin >> n;
	while(n--){
		cin >> x;
		if(kt(x))
			a[d++] = x;
		
	}
	cout << d << endl;
	while(d--)
	cout << a[d] << endl;
	
	return 0;
}