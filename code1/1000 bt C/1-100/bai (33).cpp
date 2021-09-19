#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int n;
    float s = (float)sqrt(2);
    cin >> n;
    for(int i  = 1; i <= n; i++){
        s = (float)sqrt(2 + s);
    }
    cout << fixed << setprecision(6) << s;
    return 0;
}
