#include <bits/stdc++.h>
using namespace std;
// int gcd (int a, int b)
// {
// 	return __gcd(a,b);
// }
// int lcm (int a, int b)
// {
// 	return a*b/gcd(a,b);
// }
int main()
{
	int a,b;
	cin >> a >> b;
	int s = lcm(a,b);
	int g = gcd(a,b);
	cout << s << "\n" << g;   
	return 0;
}
