#include<bits/stdc++.h>
#include<string>
// #define N 1000005
#define fr(name) freopen(name,"r",stdin);
#define fw(name) freopen(name,"w",stdout);
#define For(value,begin,end,up) for(int value = begin;value <= end;value+=up)
// #define Forl(value,begin,end,up) for(int value = begin;value >= end;value-=up)
// #define elf else if
// typedef unsigned long long ll;
using namespace std;
int main()
{
    fr("REPL.inp");
	fw("REPL.out");
	string s,s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	getline(cin,s);
	int v = s.find(s1);
	while(v >= 0)
	{
		s.replace(v,s1.length(),s2);
		v = s.find(s1);
	}
	cout << s;
    return 0;
}