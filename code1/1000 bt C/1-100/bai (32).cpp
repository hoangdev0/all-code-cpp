#include <iostream>
#include <math.h>
using namespace std;
bool k(int n){
    if(round(sqrt(n)) - sqrt(n) == 0) return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    if(k(n)) cout << n << " la so chinh phuong";
    else cout << n << " khong la so chinh phuong";
    return 0;
}
