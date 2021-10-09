#include<bits/stdc++.h>
#include<string>
// #define N 1000005
#define fr(name) freopen(name,"r",stdin);
#define fw(name) freopen(name,"w",stdout);
#define For(value,begin,end,up) for(int value = begin;value <= end;value+=up)
#define elif else if
// typedef unsigned long long ll;
int d,a[60];
using namespace std;
int main()
{
    fr("BCOUNT.inp");
    fw("BCOUNT.out");
	string s;
	fill(a,a+60,0);
    getline(cin,s);
    For(i,0,s.length()-1,1) 
    {
		if(s[i]>= 48 &&s[i]<= 57)
		{
			a[s[i]]++;
		}
    }
	For(i,48,57,1) cout << a[i] << " ";
    return 0;
}