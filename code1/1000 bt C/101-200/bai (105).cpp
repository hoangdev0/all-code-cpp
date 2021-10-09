#include <iostream>
#include <math.h>
using namespace std;
int doc(int x,int y){
     switch (x){
    case 1: cout << "Muoi" << " "; break;
    case 2: cout << "Hai muoi"<< " "; break;
    case 3: cout << "Ba muoi"<< " "; break;
    case 4: cout << "Bon muoi"<< " ";break;
    case 5: cout << "Nam muoi"<< " ";break;
    case 6: cout << "Sau muoi "<< " ";break;
    case 7: cout << "Bay muoi"<< " ";break;
    case 8: cout << "Tam muoi"<< " ";break;
    case 9: cout << "Chin muoi"<< " ";break;
    switch (y){
    case 0: if (x == 0) cout << "Khong";break;;
    case 1: if (x == 0) cout << "Mot" << " "; break;
    case 2: if (x == 0)cout << "Hai"<< " ";break;
    case 3: if (x == 0)cout << "Ba"<< " ";break;
    case 4: if (x == 0)cout << "Bon"<< " ";break;
    case 5: if (x == 0)cout << "Nam"<< " ";break;
    case 6: if (x == 0)cout << "Sau"<< " ";break;
    case 7: if (x == 0)cout << "Bay"<< " ";break;
    case 8: if (x == 0)cout << "Tam"<< " ";break;
    case 9: if (x == 0)cout << "Chin"<< " ";break;
    }

    }
}
int main()
{
    int x,y,n,i;
    cin >> n;
    y = n %10;
    n /= 10;
    x = n % 10;
    doc(x,y);
    return 0;
}
