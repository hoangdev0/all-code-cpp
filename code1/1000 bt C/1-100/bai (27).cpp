//Đếm số lượng “ướ c số chẵn” của số nguyên dương n
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,i = 1, s = 0;
    cin >> n;
    while(i <= n){
        if(n % i == 0 && i % 2 == 0) s += 1;
        i++;
    }
    cout << s;
    return 0;
}
