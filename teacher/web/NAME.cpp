#include<bits/stdc++.h>
#include<string>
// #define N 1000005
#define fr(name) freopen(name,"r",stdin);
#define fw(name) freopen(name,"w",stdout);
#define For(value,begin,end,up) for(int value = begin;value <= end;value+=up)
// #define Forl(value,begin,end,up) for(int value = begin;value >= end;value-=up)
#define elf else if
// typedef unsigned long long ll;
using namespace std;
int main()
{
    fr("NAME.inp");
	fw("NAME.out");
	int d(1),k(1);
	string s;
	getline(cin,s);
	For(i,0,s.length()-1,1)
	{
		if(s[i]>=97 && s[i] <= 122 && k == 1){
			s[i] -= 32;
		 	k = false;
		}
		else {
			if(s[i]>=65 && s[i] <= 90 && k == 0) s[i] += 32;
			if(s[i] == ' ') k = true;
		}
	}
	cout << s;

    return 0;
}