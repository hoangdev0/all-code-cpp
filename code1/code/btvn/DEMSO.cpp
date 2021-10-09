#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int n = str.length(),d = 1,sum = 0;
	for(int i = 0;i<=n;i++)
	{
		if(str[i] == 'N') d = 0;
		else{
			if(str[i-1]=='C') d++;
			else d = 1;
		}
		sum+=d;
	}
	cout << sum;
	return 0;
}