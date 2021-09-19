#include <bits/stdc++.h>
#define N 1000000007
using namespace std;
int main()
{
	long long n;
	cin >> n;
	if(n*(n+1)%6==0) cout <<(n*(n+1)/6%N)*((2*n+1)%N)%N;
	else if((n+1)*(2*n+1)%6==0) cout <<(n%N)*((n+1)*(2*n+1)/6%N)%N;
	else if(n*(2*n+1)%6==0) cout <<(n+1)%N*(n*(2*n+1)/6%N)%N;
	return 0;
}