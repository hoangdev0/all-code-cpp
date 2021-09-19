#include <bits/stdc++.h>

// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forl(value,begin,end,up) for(int value = begin;value >= end;value-=up)
#define elf else if
// typedef unsigned long long ll

using namespace std;
int n, k, d(0);
string s, t;
int main()
{
	fr("KASTR.inp");
	fw("KASTR.out");
	cin >> n >> k >> t;
	if(t.find('a') != -1)
	{
		for (int i = 0; i <= t.size()-1;i++)
		{
			int r = 0;
			int x = t.find('a');
			if(x>0)
				x--;
			s = t.substr(x,i);
			while (s.find('a')==-1)
			{
				r++;
				s=s.erase(s.find('a'), 1);
			}
			if(r == k)
				d++;
		}
		t = t.erase(t.find('a'));
	}
	cout << d;
	return 0;
}