#include <bits/stdc++.h>
#include <fstream>
#include <string>
#include <io.h>
#include <conio.h>
//#include <dos.h>
#include <chrono>
#include <thread>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>
#include <windows.h>
using namespace std;
void delay(int s)
{
    for(int j = 1; j <= (s*10000000);j++){if(j<-1);};
}
int main()
{
    SetConsoleOutputCP(610001);
    string p = "hoangyeuvy1505";
    string pa;
    cout << "Nhập mật khẩu để máy tính xác minh: ";
    do{ 
        cin >> pa;
        if(pa !="hoangyeuvy1505") cout <<"Nhập sai!vui lòng nhập lại: ";
        else cout<<"Bạn đã đăng nhập thành công!" << endl; 
    }while(pa !="hoangyeuvy1505");
    cout << "*>---==============================)Load(===========================---<*" << endl;
    delay(10);
    for(int i=20;i<=100;i+=20)
    {
        cout << "\tĐang lấy thông tin vui lòng đợi.... "<<i<<"%\n";
        delay(4);
    }
    // cout << "*>---==============================)Profile(===========================---<*"<< endl;
    // delay(10);
    // cout<<"Người yêu bạn: " <<endl;
    // delay(10);
    // cout<<"\tTên      :   Nguyễn Thị Thảo Vy"<<endl;
    // delay(10);
    // cout<<"\tTuổi     :   110"<<endl;
    // delay(10);
    // cout<<"\tNgày sinh:   24/12/2006"<<endl;
    // delay(10);
    // cout<<"\tNơi ở    :   Long An"<<endl;
    // delay(10);
    // cout<<"\tNgày sinh:   24/12/2006"<<endl;
    // delay(10);
    // cout<<"\tNgười yêu hiện tại: Đỗ Huy Hoàng"<<endl;
    // delay(10);
    // cout<<"\tTuổi     :   17"<<endl;
    // delay(10);
    // cout<<"\tNgày sinh:   19/0620010"<<endl;
    // delay(10);
    // cout<<"\tNơi ở    :   Thanh Hóa"<<endl;
    // delay(10);
    // cout << "*>---==============================)Love(===========================---<*"<<endl;
    // delay(10);
    // cout<<"Mức độ hợp nhau của 2 bạn: "<<endl;
    // delay(10);
    // cout<<"100/100"<<endl;
    // delay(10);
    // cout<<"Hai bạn rất hợp nhau nhưng vì yêu xa nên cả 2 phải cố gắng hơn!"<<endl;
    // delay(10);
    cout << "*>---==============================)Picture(===========================---<*"<<endl;
    for(int i=20;i<=100;i+=20)
    {
        cout << "Đang Tải ảnh lên.... "<<i<<"%\n";
        delay(10);
    }
    cout << "Hoàn thành ....." << endl;
    for(int i=10;i<=200;i+=10)
    {
        cout <<"\n";
    }
    fstream f;
    f.open("vy.txt",ios::in);
    string s;
    string d;

    while(!f.eof())
    {
        getline(f,s);
        delay(1.8);
        cout <<s;
    }
    f.close();
    return 0;
}