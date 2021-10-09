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
    fr("FINDX.inp");
	fw("FINDX.out");
	int d(0);
	string s,x;
	getline(cin,x);
	getline(cin,s);
	For(i,0,s.length()-1,1) if(s[i] == x[0]) d++;
	cout << d << endl;
	For(i,0,s.length()-1,1) if(s[i] == x[0]) cout << i << " ";
    return 0;
}