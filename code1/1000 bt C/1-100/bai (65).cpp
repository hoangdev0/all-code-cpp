#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
    int a,b,c;
    float d;
    cin >> a >> b >> c;
    if(a == 0)
        if(b == 0)
            if(c == 0) cout << "-1";
    		else cout << "0";
    	else if (c == 0) cout << "0";
    		 else cout << fixed << setprecision(2) << (float)-c / b;
    else{
        if (b == 0 && c == 0) cout << "0";
        else{
        d = b * b - 4 * a * c;
        if(d < 0) cout << "0";
        else if (d == 0) cout << fixed << setprecision(2) << (float)-b / 2 * a;
        else{
            float x1,x2;
            x1 = (-b + sqrt(d)) / 2 * a;
            x2 = (-b - sqrt(d)) / 2 * a;
            if (x1 < x2) cout << fixed << setprecision(2) << x1 << " " << x2;
            else cout << fixed << setprecision(2) << x2 << " " << x1;
        }
    }
    };
    return 0;
}
