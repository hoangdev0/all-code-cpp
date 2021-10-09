#include<bits/stdc++.h>
#include<string>
// #define N 1000005
#define fr(name) freopen(name,"r",stdin);
#define fw(name) freopen(name,"w",stdout);
#define For(value,begin,end,up) for(int value = begin;value >= end;value-=up)
// #define elf else if
// typedef unsigned long long ll;

using namespace std;
int main()
{
    fr("ASTRING.inp");
    fw("ASTRING.out");
	string s,r="";
    getline(cin,s);
    For(i,s.length()-1,0,1) 
    {
       r+=s[i];
    }
    cout << r;
    return 0;
}