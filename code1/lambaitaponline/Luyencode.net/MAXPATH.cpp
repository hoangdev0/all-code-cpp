//Input
// 	5 7
// 	9 -2 6 2 1 3 4        9 
// 	0 -1 6 7 1 3 3			-1
// 	8 -2 8 2 5 3 2				8
// 	1 -1 6 2 1 6 1 					6
// 	7 -2 6 2 1 3 7						7
//Output
//						41
#include <bits/stdc++.h>
#define N 105
#define For(i,a,b) for(int i = a;i<=b;i++)
using namespace std;
int a[N][N],n,m,s;
int main()
{
	cin >> n >> m; For(i,1,n) For(j,1,m) cin >> a[i][j];
	For(j,0,m) a[0][j] = a[n+1][j] = -105;
	For(j,2,m) 
		For(i,1,n)
			a[i][j] += max(a[i][j-1],max(a[i-1][j-1],a[i+1][j-1]));
	s = a[1][m];
	For(i,2,n) s = max(s,a[i][m]);
	cout << s;
	return 0;
}