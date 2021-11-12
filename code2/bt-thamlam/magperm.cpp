#include <bits/stdc++.h>

using namespace std;

int maint()
{
	int n, k, m, s(true);

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		b[i] = i + k;
		if (b[i] > n)
		{
			m = n - b[1] + 1;
			b[i] = i - k;
			if (b[i] != m + 1)
			{
				s = false;
			}
		}
	}

	if( s== true) 
	{
		for (int i = 1; i<=n; i++)
		{
			cout << b[i] << " ";
		}
		
	}

	return 0;
}