#include <bits/stdc++.h>
#define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int n;
string s,s1;
int a[N],m(-N),v(-N);
int main()
{
	fr("demsach.inp");
	fw("demsach.out");
	cin >> n;
	while(cin >> s1)	s += s1;
	
	For(i,0,s.length()-1,1)	a[(int)s[i] - 48]++;
	For(i, 0, 9, 1) m < a[i] ? (m = a[i], v = i) : (m = m);

	cout << v << " " << m;
	return 0;
}