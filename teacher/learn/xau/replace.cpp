#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,s1;
	s = "Hoang yeu V";
	s1 = "Vy";
	s.replace(s.find("V"),s1.length(),s1);
	cout << s;
	return 0;
}