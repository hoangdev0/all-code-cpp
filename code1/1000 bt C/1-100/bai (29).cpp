//Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ
//lớn nhất của 100 là 25
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,i = 1,m;
    cin >> n;
    if(n % 2 == 0){
    while (i <= n / 2){
        if (n % i == 0 && i % 2 != 0) m = i;
        i++;
    }
    cout << m;
    }
    else cout << n;
    return 0;
}
