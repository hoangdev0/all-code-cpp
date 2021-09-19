#include<iostream>
#include<algorithm>
using namespace std;

int arr[102][102];
int main() {

	int n, m, result;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= m; ++j)
			cin >> arrm[i][j];
	for (int j = 0; j <= m; ++j)
		arr[0][j] = arr[n + 1][j] = - 101;
	for (int j = 2; j <= m; ++j)
		for (int i = 1; i <= n; ++i)
			arr[i][j] += max(arr[i - 1][j - 1], max(arr[i][j - 1], arr[i + 1][j - 1]));
	result = arr[1][m];
	for (int i = 2; i <= n; ++i)
		result = max(result, arr[i][m]);
	cout << result;
}
