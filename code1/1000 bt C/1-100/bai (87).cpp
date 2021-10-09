#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    const int m = 10000;
    int n = 0,s = 0;
    while(s < m){
        n++;
        s += n;
    }
    cout <<"n = " << n endl;
    cout << "Tong la : " << s;
    return 0;
}
