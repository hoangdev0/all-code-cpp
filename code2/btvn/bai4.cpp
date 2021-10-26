#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
typedef unsigned long long ll;
// const int N =1e6+5;
using namespace std;
string s;
int d(0);
int main()
{
	// fr("bai4.inp");
	// fw("bai4.out");

	cin >> s;
	For(i, 0, s.size() - 1, 1)
	{
		if (s[i] >= 65  && s[i] <= 90)
			s[i] +=32;
	}
	int i = 0,
		j = s.size() - 1;
	while(i<j)
	{
		if(s[i] != s[j])
		{
			cout << "NO";
			return 0;
		}
		i++;
		j--;
	}
	cout << "YES";
	return 0;
}