#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cout << "Nhap thang: ";
    cin >> t ;
    switch(t){
    case 1:
    case 2:
    case 3:
        cout << "Quy mot!";
        break;
    case 4:
    case 5:
    case 6:
        cout << "Quy hai!";
        break;
    case 7:
    case 8:
    case 9:
        cout << "Quy ba!";
        break;
    case 10:
    case 11:
    case 12:
        cout << "Quy bon!";
        break;
    }
    return 0;
}
