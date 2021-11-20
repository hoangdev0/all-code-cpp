#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N =11;
string s;
int n,a[N];
int main()
{
	fr("number_max.inp");
	fw("number_max.out");
	fill(a, a + N, 0);
	cin >> s;
	n = s.size();
	for (int i = 0;i<n;i++)
		a[(int)(s[i] - 48)]++;
	for (int i = 9; i >= 0;i--)
		if(a[i]>0)
		
			while(a[i]>0)
			{
				cout << i;
				a[i]--;
			}
	return 0;
}