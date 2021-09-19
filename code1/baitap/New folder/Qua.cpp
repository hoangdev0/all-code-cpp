#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,m,g=0,k,c;
    cin >> n >> m;
    for(g;g <= m / 15;g++){
       k = (m-n-14*g)/6;
       c = (n-g-k);
       if((m-n-14*g) % 6 == 0)
       cout << g << " " << k << " " << c <<endl;
    }
    return 0;
}
