//so hoan thien
#include <iostream>
#include <math.h>
using namespace std;
bool kt(int n){
    int s = 0;
    for(int i = 1; i <= n/2; i++){
        if(n % i == 0) s += i;
    }
    if(s == n) return true;
    else return false;
}
int main(){
    int n;
    cin >> n;
    if(kt(n) == true)cout <<n<< " la so hoan thien";
    else cout << n << " khong la so hoan thien";
    return 0;
}
