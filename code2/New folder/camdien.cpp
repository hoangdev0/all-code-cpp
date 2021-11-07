#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e6 + 5;
int n, a[N],m,d(0),s(0);
bool cm(int a, int b)
{
	return a > b;
}
int main()
{
	fr("camdien.inp");
	fw("camdien.out");

	cin >> n >> m;
	if(m == 1)
		cout << 1;
	else{
		For(i, 1, n, 1)
		{
			cin >> a[i];
			s += a[i];
		}
		s = s - m + 1;
		if ((s < 0))
			cout << -1;
		else if (s == 0)
			cout << n;
		else
		{
			sort(a + 1, a + n + 1, cm);
			s = a[1];
			if(s>=m)
				cout << 1;
			else{
				d = 1;
				For(i, 1, n, 1)
				{
					s += a[i] - 1;
					d++;
					if (s > m) 
					{
						cout << d;
						break;
					}
				}
			}
			// cout << d;
		}
	}
	return 0;
}