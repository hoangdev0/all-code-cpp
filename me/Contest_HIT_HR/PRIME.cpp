#include<bits/stdc++.h>
#define N 1000002
#define fr(name) freopen(name,"r",stdin);
#define fw(name) freopen(name,"w",stdout);
#define For(value,begin,end,up) for(int value = begin;value <= end;value+=up)
#define elf else if
typedef unsigned long long ll;
using namespace std;

int a[N], n, l, r, q;

void nt()
{
	memset(a, 1, N);
	For(i,2,1001,1)
	{
		if(a[i])
		{
			For(j,i*i,N,i)
			{
				a[j] = 0;
			}
		}
	}
	a[1] = 0;
	a[0] = 0;
}

int tinh(int l, int r)
{
	int d(0);
	if(l<=2)
		d++;
	if(l%2 == 0)
		l++;
	For(i,l,r,2)
	{
		if(a[i])
			d++;
	}
	return d;
}
int main()
{
	nt();
	fr("PRIME.INP");
	fw("PRIME.OUT")
	cin >> q;
	For(i,1,q,1)
	{
		cin >> l >> r;
		cout << tinh(l, r) << endl;
	}
	return 0;
}