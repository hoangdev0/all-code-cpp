#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
// const int N =1e2+50;
string s;
int d(0),n,i,j;
bool k;
int main()
{
	cin >> s;
	n = s.size()-1;
	s = s + s;
	For(x,0,n,1)
	{
		k = true;
		i = x;
		j = n+x;
		while(i<j)
		{
			if(s[i] != s[j])
			{
				k = false;
				break;
			}
			i++;
			j--;
		}
		if(k == true)
			d++;
	}
	cout << d;
	return 0;
}