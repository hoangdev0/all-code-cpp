#include <bits/stdc++.h>
#define N 1005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int n, a[N];
bool c[N];
void eth()
{
	memset(c, true, N);
	c[0] = false;
	c[1] = false;
	for (int i = 2; i * i <= N; i++)
		if (c[i])
			For(j, i * i, N, i) c[j] = false;
}
int main()
{
	eth();// sàng nguyên tố
	fr("analyse.inp");//mở file đọc input
	fw("analyse.out");// mở file ghi output

	// số cần phân tích
	while(cin >> n)
	{
		fill(a + 1, a + 1 + N, 0);// 1 mảng mảng lưu số mũ
		For(i, 2, n, 1)// 2 là số nhỏ nhất nên nhân từ nó
		{
			if (c[i]) a[i]++;//kiểm tra i có phải nguyên tố không
							// nếu là nguyên số chỉ cần tăng số mũ  VD:2,3,5,..
			else{//ngược lại là ko phải nguyên tố nên phải phân tích VD,4,6,..
				int x = i;//khai báo biên x = i để ko làm mất gtri biến i
				For(j,2,x,1)// for từ 2 tới x
				{
					if(c[j])// ktra có phải nguyên tố không
					while (x % j == 0)//nếu là nguyên tố ktra tiếp x có chia het cho so đó ko
					{
						x /= j;//nếu chia hêt thì thực hiện phép chia
						a[j]++;//tăng số mũ
					}

				}
			}
		}
		For(i, 2, n, 1) if (a[i] > 0) cout << a[i] << " "; // in ra
		cout << endl;
	}
	return 0;
}