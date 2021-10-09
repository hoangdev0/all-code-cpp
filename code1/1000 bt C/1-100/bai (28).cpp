//Cho số nguyên dương n. Tính tổng các ước số nhỏ hơn chính nó.
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,i = 1, s = 0;
    cin >> n;
    while(i <= n/2){
        if (n % i == 0) s += i;
        i++;
    }
    cout << s;
    return 0;
}
