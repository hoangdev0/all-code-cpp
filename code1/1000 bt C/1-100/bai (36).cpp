//Tính S(n) = CanBac2(n! + CanBac2((n-1)! +CanBac2((n – 2)! + … + CanBac2(2!) + CanBac2(1!)))) có n dấu căn
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,i = 1,g = 1;
    float s = 0;
    cin >> n;
    while(i <= n){
        g *= i;
        s = (float)sqrt(s + g);
        i++;
    }
    cout << s;
    return 0;
}
