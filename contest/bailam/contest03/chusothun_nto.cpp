#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 3e6 + 5;
string s, s1;
int n;
bool a[N];
void conv(int n)
{
	string x = "";
	int t;
	while (n != 0)
	{
		t = n % 10;
		x = ((char)(t + 48))+x;
		n /= 10;
	}
	s += x;
}
void sang()
{
	fill(a + 2, a + N, true);
	for (int i = 2; i * i <= N; i++)
	{
		if (a[i])
		{
			for (int j = i * i; j <= N; j += i)
				a[j] = false;
		}
	}
	s += "22";
	for (int i = 3; i <= N; i += 2)
		if (a[i])
			conv(i);
}
int main()
{
	sang();
	fr("chusothun_nto.inp");
	fw("chusothun_nto.out");
	
	cin >> n;
	cout << s[n] << endl;

	return 0;
}