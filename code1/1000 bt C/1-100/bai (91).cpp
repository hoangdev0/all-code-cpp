#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int d = 0;
    for(int i = 1; i < 100; i +=2){
        d ++;
        cout << i << " ";
        if(d == 10){
            cout<<"\n";
            d = 0;
        }
    }
    return 0;
}
