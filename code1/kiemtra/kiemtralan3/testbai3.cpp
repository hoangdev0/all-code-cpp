#include <bits/stdc++.h>
#define N 1000002
using namespace std;
int x,c[N],n,m=0,nhat;
int main()
{
	freopen("SOTHUNHI.INP","w",stdout);
	n = N;
	cout << n-2 << endl;
	srand(time(NULL));
	int x = rand()%(n-1+1)+1;
	// x = 241206;
	int d = 0;
	for(int i = -1; i>=-n+3;i--)
	{
		// if(i!= -x && i!= -x+1)
		// {
			cout << i << " ";
			d++;
		// }
		if(d == 8) 
		{
			cout << endl;
			d = 0;
		}
	}
	cout<<endl<<-x<<endl;
	// for(int i = -1;i >= m; i--)
	// {
	//     if(c[i] == 0)
	//     {
	//         nhat = i;
	//         break;
	//     }
	// }
	// for(int i = nhat-1;i >-N;i--)
	// {
	//     if(c[i] == 0)
	//     {
	//         cout << i;
	//         break;
	//     }
	// }
	return 0;
}