#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    cout << "a = " << a <<", b = " << b << endl;
    swap(a,b);
    cout << "a = " << a <<", b = " << b;
    return 0;
}