#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a,b,x;
    cout << "Nhap vao 2 so a b = ";
    cin >> a >> b;
    if (a == 0) {
        if(b == 0) cout << "Pt co vo so nghiem";
        else cout << "Pt vo nghiem";
    }else {
    if(b == 0) cout << "Pt vo nghiem";
    else cout << "pt co 1 nghiem la : " << (float)-b / a;
    }
    return 0;
}
