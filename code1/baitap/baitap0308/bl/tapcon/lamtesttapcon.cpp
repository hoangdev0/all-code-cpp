#include <bits/stdc++.h>
#define N 10001
#define M 32001
using namespace std;
int n,x,d=1,a[N];
bool c[M];
int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}
int main()
{
	//freopen("tapcon.inp","r",stdin);
	freopen("test6.inp","w",stdout);
	//freopen("tapcon.inp","w",stdout);
	//freopen("tapcon.out","r",stdin);
	//memset(c,false,M);
	//cin >> n;
	cout << 10 << endl;
	n = 10;
	srand(time(NULL));
	for(int i = 1;i<=n;i++)
	{	
		int y = random(1,32000);	
		cout << y << " ";
	}
	//for(int i = 1;i <= d;i++) cout << a[i]<<" ";
	return 0;
}