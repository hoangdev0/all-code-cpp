#include <bits/stdc++.h>
using namespace std;
bool c(int year) 
{ 
return (((year % 4 == 0) && (year % 100 != 0)) || 
        (year % 400 == 0)); 
} 
int main() 
{
	int n;
	cin >> n;
	if(c(n)) cout << "YES";
	else if (!c(n)) cout << "NO";
	else cout << "INVALID";
	return 0;
}