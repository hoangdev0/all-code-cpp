#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int d,m,y,s,i;
    cin >> d >> m >> y;
    s = d;
    for(i = 1; i < m; i++){
        switch(i){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        s+= 31;
        break;
        case 2: s += ( y %4 == 0 && y % 100 != 0 || y % 400 == 0) ? 29 : 28; break;
        case 4: case 6: case 9: case 11:
        s+= 30;
        break;
        }
    cout << s;
    }
    return 0;
}
