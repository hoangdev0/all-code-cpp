//Dem so luong uoc so nguyen
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    int i = 1,s = 0;
    while(i <= n ){
        if (n % i == 0) s += 1;
        i++;
    }
    cout << s;
    return 0;
}
