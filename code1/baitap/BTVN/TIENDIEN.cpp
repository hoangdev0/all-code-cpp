#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    freopen("TIENDIEN.inp","r",stdin);
    freopen("TIENDIEN.out","w",stdout);
    int n,t;
    float s = 0;
    float const a = 1.678;
    float const b = 1.734;
    float const c = 2.014;
    float const d = 2.536;
    float const e = 2.834;
    float const f = 2.927;
    cin >> n;
    t = n;
    if (n >= 0)
        if(n <= 50 ){
            s += t * a;
        }
        else {
            t -= 50;
            s += ((t - (t - 50)) * a);
        if (n >= 51)
        if(n <= 100){
            s += t * b;
        }
        else{
            s += ((t - (t - 50)) * b);
            t -= 50;
        if (n >= 101)
        if(n <= 200){
            s += t * c;
        }
        else{
            s += ((t - (t - 100)) * c);
            t -= 100;
        if (n >= 201)
        if(n <= 300){
            s += t * d;
        }
        else{
            s += ((t - (t - 100)) * d);
            t -= 100;
        if (n >= 301)
        if(n <= 400){
            s += t * e;
        }
        else{
            s += ((t - (t - 100)) * e);
            t -= 100;
         if (n >= 401)
            s += t * f;
        }
        }
        }
        }
        }
    cout << fixed << setprecision(3) << s << endl << s * 0.1 << endl << s + (s * 0.1);
    return 0;
}
