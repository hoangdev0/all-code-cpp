#include <iostream>
#include <math.h>
using namespace std;
int check(int n){
    int d = 0;
    while(n > 1){
        d = n % 3;
        if (d != 0) return 0;
        n /= 3;
    }
    return 1;
}
int main()
{
    int i = 0,m = 10000;
    while(i < m){
        if(check(i) == 1) cout << i << " ";
        i++;
    };
    return 0;
}
