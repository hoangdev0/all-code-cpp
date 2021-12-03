#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N =3e6+5;
bool a[N];
string s,x;
int n;
void nt()
{
	fill(a + 1, a + N + 1, true);
	a[0] = false;
	a[1] = false;
	for (int i = 2; i * i<=N;i++)
		if(a[i])
			for (int j = i * i; j <= N;j+=i)
				a[j] = false;
}
void conv(int n)
{
	x = "";
	while(n>0)
	{
		x = (char)((n % 10)+48) + x;
		n /= 10;
	}
	s += x;
}
void solve()
{
	nt();
	s = "22";
	for (int i = 3;i<=N;i++)
	if(a[i])
		conv(i);
}
int main()
{
	solve();
	fr("fibo.inp");
	fw("fibo.out");

	cin>>n;
	cout << s[n];

	return 0;
}