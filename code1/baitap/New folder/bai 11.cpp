#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,s = 0,t;
    cin >> n;
    for (int i = 1; i <= n; i++) s += i;
    t = n * (n + 1) / 2;
    if (s == t) cout << "Pt dung";
    else cout << "Pt sai";
    return 0;
}
