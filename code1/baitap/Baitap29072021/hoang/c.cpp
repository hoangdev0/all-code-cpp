#include <bits/stdc++.h>
using namespace std;
int main()
{
     string p = "hoangyeuvy1505";
    string pa;
    cout << "Nhập mật khẩu để máy tính xác minh:" << endl;
    do{ 
        cin>> pa;
        if(pa !="hoangyeuvy1505") cout<<"Nhập sai!vui lòng nhập lại: ";
        else cout<<"Bạn đã đăng nhập thành công!" << endl; 
    }while(pa !="hoangyeuvy1505");
    return 0;
}