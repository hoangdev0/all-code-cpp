#include <bits/stdc++.h>
using namespace std;
int main()
{
	char c;
	float a,b;
	cin >> a >> c >> b;
	if(c == '+') cout << fixed << setprecision(2) << a+b;
	else if(c == '-') cout << fixed << setprecision(2) << a-b;
	else if(c == '*') cout << fixed << setprecision(2) << a*b;
	else if(c == '*') 
		if (a!=0&&b!=0)cout << fixed << setprecision(2) << a/b;
		else cout << "Math Error";
	else cout << "Math Error";
	return 0;
}