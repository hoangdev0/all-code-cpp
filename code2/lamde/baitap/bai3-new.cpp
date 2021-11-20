#include <bits/stdc++.h>
#define elf else if
using namespace std;
typedef unsigned long long ll;
const int N = 1e6 + 5;
string s, x;
int n;
bool kt(int i, int j)
{
	int d(0);
	if (s[i] == ')' || s[j] == '(')
		return false;
	for (i; i <= j; i++)
	{
		if (s[i] == '(')
			d++;
		elf(s[i] == ')') d--;
		if (d < 0)
			return false;
	}
	if (d != 0)
		return false;
	return true;
}

int dem(string s)
{
	int i(0), d(0);
	for(i;i<n;i++)
	{	if(s[i] != '(')
			continue;
		for (int j = i+1; j <= n; j++)
		{	if(s[j] != ')')
				continue;
			if(kt(i,j))	
				d++;//()
		}
	}
	return d;
}

// void test()
// {
// 	freopen("bai3.inp", "w", stdout);
// 	srand(time(NULL));
// 	int n=20,m = 1e3;
// 	cout << n << endl;
// 	for (int i = 1; i <= n;i++)
// 	{
// 		for (int j = 1; j <= m;j++)
// 			cout << (char)(40 + rand() % 2);
// 		cout << endl;
// 	}
// }

int main()
{
	// test();
	freopen("bai3.inp", "r", stdin);
	freopen("bai3.out", "w", stdout);

	cin >> n;
	cin >> s;
	cout << dem(s) << endl;

	return 0;
}