#include <bits/stdc++.h>
#define N 1005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int n, a[N];
bool c[N];
void eth()
{
	memset(c, true, N);
	c[0] = false;
	c[1] = false;
	for (int i = 2; i * i <= N; i++)
		if (c[i])
			For(j, i * i, N, i) c[j] = false;
}
void phantich(int n)
{
	int x;
	fill(a + 1, a + 1 + n, 0);
	For(i, 2, n, 1)
		if (c[i]) a[i]++;
		else{
			x = i;
			For(j,2,x,1)
			{
					if(c[j])
					while (x % j == 0)
				{
						x /= j;
						a[j]++;
				}
			}
		}
}
void inra(int n)
{
	For(i, 2, n, 1) if (a[i] > 0) cout << a[i] << " ";
}
int main()
{
	eth();// sàng nguyên tố
	fr("analyse.inp");//mở file đọc input
	fw("analyse.out");// mở file ghi output

	// số cần phân tích
	while(cin >> n)
	{
		phantich(n);
		inra(n);
		cout <<endl;
	}
	return 0;
}