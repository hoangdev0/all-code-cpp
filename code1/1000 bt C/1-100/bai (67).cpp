//PT trung phuong
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    const string ptvn = "PT vo nghiem";
    const string ptvsn = "PT vo so nghiem";
    const int nk = 0;
    int a,b,c;
    double d,t,t1,t2;
    cout << "Nhap a b c = ";
    cin >> a >> b >> c;
    if(a == 0){
        if (b == 0){
            if (c == 0) cout << ptvsn;
            else cout << ptvn;
        }else if ((double)-c/b > 0) cout << (double)sqrt((double)-c/b) << " " << (double)-sqrt((double)-c/b);
              else cout << ptvn;
    }else{
    d = (b*b - 4 * a * c);
    t1 = (double)(-b + sqrt(d)) / 2 * a;
    t2 = (double)(-b - sqrt(d)) / 2 * a;
    if(d < 0) cout << ptvn;
    else if(d == 0){
        t = (double) -b / 2 * a;
        if (t < 0) cout << ptvn;
        else if (t == 0) cout << nk;
        else cout << (double)sqrt(t) << " " << (double)-sqrt(t);
    }else{
        if(t1 < 0 && t2 < 0) cout << ptvn;
        else if(t1 <= 0){
            if(t2 <= 0) cout << nk;
            else cout << (double)sqrt(t2) << " " << (double)-sqrt(t2);
        }else if(t2 <= 0){
            if(t1 <= 0) cout << nk;
            else cout << (double)sqrt(t1) << " " << (double)-sqrt(t1);
        }else{
            cout << fixed << setprecision(2) << "x1 = " << (double)sqrt(t1) << "  " << "x2 = " << (double)-sqrt(t1) << "  x3 = " ;
            cout << fixed << setprecision(2) << (double)sqrt(t2) << " " << " x4 = " << (double)-sqrt(t2);
        }
    }
    }
    return 0;
}
