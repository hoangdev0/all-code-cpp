//Liet ke uoc le
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    int i = 1;
    while(i <= n ){
        if (n % i == 0 && i % 2 != 0) cout << i << " ";
        i++;
    }
    return 0;
}
