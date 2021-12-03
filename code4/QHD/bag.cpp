#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e3 + 5;
int n, v[N], w[N], dp[N][N], m;
int main()
{
	fr("bag.inp");
	fw("bag.out");

	cin >> n >> m;
	//	so luong(n)   khoi luong max(m)
	for (int i = 1; i <= n; i++)
		cin >> w[i] >> v[i];
	// khoi luong(w) gia tri (v)
	for (int i = 1; i <= n; i++)
	{//lap bang gia tri
		for (int j = 1; j <= m; j++)
		{
			dp[0][j] = 0;
			//bai toan con (hien nhien)
			if (w[i] <= j)
			// khoi luong max > khoi luong vat dang xet
				dp[i][j] = max(dp[i - 1][j], (v[i] + dp[i - 1][j - w[i]]));
			// gia tri cua vat cộng với ô trước đó giới hạn khối luọng j - w[i]
			//mã của ô trước và giá trị vừa tính đc
			else
			// TH j<w[i] thì bằng giá trị ô trước đó dp[i-1][j]
				dp[i][j] = dp[i - 1][j];
		}
	}

	cout << dp[n][m];
	// ô cuối cùng của mảng là giá trị tối ưu nhất
	return 0;
}