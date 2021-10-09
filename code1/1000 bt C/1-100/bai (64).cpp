#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b;
    do{
        cout << "Nhap a b(a,b >= 0) = ";
        cin >> a >> b;
        if(a < 0 || b < 0) cout << "Nhap lai a b >= 0";
    }while(a < 0 && b < 0);
    if(a != 0){
        if (b == 0) cout << "0";
        else cout << "pt co nghiem la : " << (double)-b / a;
    }
    else{
        if(b == 0) cout << "-1";
        else cout << "0";
    }
    return 0;
}
