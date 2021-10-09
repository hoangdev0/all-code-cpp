#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z;
    /*for(x = 0; x <= 20; x++){
        for(y = 0; y <= 33; y++){
            for(z = 3; z <= 100; z++){
                if((5*x+3*y+z/3 == 100) && x+y+z == 100)
                    cout << "Trau dung " << x << " ";
                    cout << "Trau nam " << y << " ";
                    cout <<  "Trau gia " << z << "\n";
            }
        }
    }*/
    /*for(x = 0; x <= 20; x++){
        for(y = 0; y <= 33; y++){
            z = 100 - (x+y);
            if(5*x+3*y+z/3 == 100){
                cout << "Trau dung " << x << " ";
                cout << "Trau nam " << y << " ";
                cout <<  "Trau gia " << z << "\n";
         }
        }
    }*/
    for(x = 0; x <= 20; x++){
         y = ceil((float)(200 - 14 * x) / 8);
         z = 100 - (x + y);
         if(5*x+3*y+z/3 == 100 && y >= 0 && z >= 0){
                cout << "Trau dung " << x << " ";
                cout << "Trau nam " << y << " ";
                cout <<  "Trau gia " << z << "\n";
         }
    }
    return 0;
}
