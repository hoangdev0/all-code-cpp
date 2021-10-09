#include <iostream>
#include <math.h>
using namespace std;
bool k(int n){
    int d = 1;
    for(int i = 2; i <= n/2; i++)
    if(n % i == 0){
            d += 1;
            break;
    }
    if(d == 1) return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    if(k(n)) cout << n << " la so nguyen to";
    else cout << n <<  " khong la so nguyen to";
    return 0;
}
