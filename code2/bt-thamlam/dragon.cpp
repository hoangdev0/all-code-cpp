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
int s, n;
struct dr{
	int a;
	int b;
};
bool cm(dr a, dr b)
{
	return a.a < b.a;
}
dr a[N];
int main()
{
	fr("dragon.inp");
	fw("dragon.out");

	cin >> s >> n;
	For(i, 1, n, 1) cin >> a[i].a >> a[i].b;
	sort(a + 1, a + n + 1, cm);
	int i(1);
	while(i<=n)
	{
		if(s > a[i].a)
			s += a[i].b;
		else
			break;
	}
	if(i>n)
		i--;
	if(n-i+1 > 0) 
	{
		cout << "NO" << endl;
		cout << n-i+1;
	}else
		cout << "YES";
	return 0;
}