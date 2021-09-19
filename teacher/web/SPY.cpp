#include<bits/stdc++.h>
#include<string>
// #define N 1000005
#define fr(name) freopen(name,"r",stdin);
#define fw(name) freopen(name,"w",stdout);
#define For(value,begin,end,up) for(int value = begin;value <= end;value+=up)
// #define Forl(value,begin,end,up) for(int value = begin;value >= end;value-=up)
#define elf else if
// typedef unsigned long long ll;
int n,a,b,x(0),y(0),d(1);
bool check(int x,int y,int a, int b)
{
	if((x == a-1 || x == a || x == a+1)&&(y == b-1 || y == b || y == b+1)) return true;
	return false;
}
using namespace std;
int main()
{
    fr("SPY.inp");
	fw("SPY.out");
	cin >> a >> b;
	cin >> n;
	string s;
	cin >> s;
	For(i,0,s.length(),1) 
	{
		if(check(x,y,a,b)) 
		{
			d++;
			cout << i << "\n";
		}
		if(s[i] == 'R') x++;
		elf(s[i] == 'L') x--;
		elf(s[i] == 'U') y++;
		else y--;
	}
	if(d==1) cout << -1;
    return 0;
}