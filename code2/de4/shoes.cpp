#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N =1e4+5;
const int M =1e3;
int a[N],b[N],n,x,s(0);
char A = 'L', B = 'R',c;
int main()
{
	fr("shoes.inp");
	fw("shoes.out");
	fill(a+1,a+N+1,0);
	fill(b+1,b+N+1,0);
	cin >> n;
	For(i,1,n,1)
	{
		cin >> x >> c;
		if(c == A) a[x]++;
		else if(c == B) b[x]++;

	}
	For(i,1,M,1)
	{
		if(a[i] >= 1 && b[i] >= 1)
			s += min(a[i], b[i]);
	}
	cout << s;
	return 0;
}