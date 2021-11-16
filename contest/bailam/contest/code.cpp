#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
// #define Forc(value, begin, end, up) for (int value = begin; value * value <= end; value += up)
// #define Fort(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
using namespace std;
typedef unsigned long long ll;
// const int N =1e6+5;
void test()
{
	fw("tongchuso.inp");
	srand(time(NULL));
	int n = 19;
	For(i, 1, n, 1) cout << 1 + rand() % 10;
}
int main()
{
	test();
	fr("tongchuso.inp");
	fw("tongchuso.out");
	
	return 0;
}