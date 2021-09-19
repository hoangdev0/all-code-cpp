#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    for(int i = 0;i <= 40; i++)
        for(int j = 0; j <= 100;j++)
        {
            for(int k = 0;k<= 200;k++)
            if(1000 * k + 2000 * j + 5000 * i == 200000)
                cout << k <<" to 1000 " << j << " to 2000 " << i << " to 5000" << endl;
        }
    return 0;
}
