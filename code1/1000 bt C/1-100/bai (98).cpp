#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f;
    cout << "Nhap a b c d e f : ";
    cin >> a >> b >> c >> d >> e >> f;
    int D = a * e - d * b;
    if (D != 0){
    int Dx = c * e - f * b;
    int Dy = a * f - d * c;
    float x = (float)Dx / D;
    float y = (float)Dy / D;
    cout << "Pt co 1 nghiem duy nhat la:\n" << "x = " << x << " " << "y = " << y;
    }else{
        if(c == f) cout << "Pt co vo so nghiem";
        else cout << "Pt vo nghiem";
    }
    return 0;
}
