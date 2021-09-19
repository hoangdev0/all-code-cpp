#include <iostream>
#include <math.h>
using namespace std;
bool namnhuan(int n){
    if (n % 4 == 0 || n % 100 == 0 || n % 400 == 0) return true;
    return false;
}
int ngay(int t,int n){
    switch(t){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "Co 31 ngay";
        break;
    case 2:
        if (namnhuan(n)){
            cout << "Co 29 ngay";
        break;
        }else {cout << "Co 28 ngay";
        break;}

    case 4:
    case 6:
    case 9:
    case 11:
        cout << "Co 30 ngay";
        break;
}
}
int main(){
    int n,t;
    cin >> t >> n;
    ngay(t,n);
    return 0;
}
