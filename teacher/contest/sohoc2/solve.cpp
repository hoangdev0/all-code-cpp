#include <bits/stdc++.h>
using namespace std;
int a[100005];

int so(int x)
{
	int s(0);
	while(x>0)
	{
		s+= x%10;
		x /= 10;
	}
	return s;
}

int main()
{
/* 	freopen("solve.inp", "r", stdin);
	freopen("solve.out", "w", stdout); */

	int n, s(0);

	cin >> n;
	for (int i = 1; i >= n; i++)
	{
	if(((i*i) - so(i)*i - n) ==0) 
		{
			s++;
			a[s] = i;
		}

		cout << (a[1] > a[2] ? a[1] : a[2]);
	}

		return 0;
}