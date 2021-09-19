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
    fr("CHAR.inp");
	fw("CHAR.out");
	int a[150];
	fill(a+1,a+150+1,0);
	string s;
	getline(cin,s);
	For(i,0,s.length()-1,1) if(s[i] >=65 && s[i] <= 90) s[i] +=32;
	For(i,0,s.length()-1,1) a[(int)s[i]]++;
	For(i,97,122,1) 
	{
		if(a[i]>0) 
		{
			cout << (char)i << " " << a[i] << endl;
		}
	}
    return 0;
}