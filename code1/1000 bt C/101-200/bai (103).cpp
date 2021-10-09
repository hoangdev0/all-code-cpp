#include <iostream>
#include <math.h>
using namespace std;
bool namnhuan(int n){
    if (n % 4 == 0 || n % 100 == 0 || n % 400 == 0) return true;
    return false;
}
int ngay(int t,int n){
    int ntt;
    switch(t){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        ntt = 31;
        break;
    case 2:
        if (namnhuan(n)){
             ntt = 29;
        break;
        }else { ntt = 28;
        break;}

    case 4:
    case 6:
    case 9:
    case 11:
        ntt = 30;
        break;
}
    return ntt;
}
int nkt(int d, int t, int n){
    if(d == 1){
        if(t == 1){
            t = 12;
            n --;
        }else t --;
    }else n--;
    cout << d << " " << t << " " << n;
}
int main(){
    int n,t,d;
    cin >> d >> t >> n;
    nkt(d,t,n);
    return 0;
}
