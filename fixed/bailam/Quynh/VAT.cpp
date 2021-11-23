//bài này của QUỳnh - được 3/6đ
#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("VAT.INP", "r", stdin);
    freopen("VAT.OUT", "w", stdout);

    int n;
    cin >> n;
    double st, g;
    st = (double)n / 1.1;
    g = (double)n - st;
    cout << fixed << setprecision(2) << st << " " << g;

    return 0;
}
