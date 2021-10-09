#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
    float a,b,c;
    cin>>a>>b>>c;
    if (a<0||b<0||c<0||a>=b+c||b>=a+c||c>=a+b)
        cout<<"0";
    else if(a == sqrt(b*b+c*c)||b==sqrt(a*a+c*c)||c==sqrt(b*b+a*a))
    cout << "Day la tam giac vuong";
    else if(a == b || b == c)
    cout << "Day la tam giac deu";
    else if(a == b || b == c || a == c)
    cout << "Day la tam giac can";
    else cout << "Day la tam giac thuong";
    return 0;
}
