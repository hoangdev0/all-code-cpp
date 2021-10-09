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
void loading()
{
    char a=178,b=219;
    cout<<"\n\t\t\t\t\t\tLOADING...\n \n";
    cout<<"\t\t\t";
    for(int i = 0;i<=50;i++)
    {
        cout<<a;
    }
    cout<<"\r";
    cout<<"\t\t\t";
    for(int i = 0;i<=50;i++)
    {
        cout<<b;
        Sleep(150);
    }
    cout<<"\n\n\t\t\t\t\tLOADING SUCCESSFULLY\n\n";
}
int main()
{
    system("color fc");
    system("pause");
    loading();
    //system("color 0");
    SetConsoleOutputCP(65001);
    string p = "hoangyeuvy1505";
    string pa;
    cout << "Nhập mật khẩu xác minh: ";
    do{ 
        cin >> pa;
        if(pa !="hoangyeuvy1505") cout <<"Nhập sai!vui lòng nhập lại: ";
        else cout<<"Bạn đã đăng nhập thành công!" << endl; 
    }while(pa !="hoangyeuvy1505");

    Sleep(800);
    for(int i=20;i<=100;i+=20)
    {
        cout << "\tĐang tải vui lòng đợi.... "<<i<<"%\n";
        Sleep(300);
    }
    system("cls");
    for(int i=5;i>=0;i--)
    {
        cout << "Vui lòng đợi trong "<<i<<" s";
        Sleep(900);
        system("cls");
    }
    system("color 0f");
    fstream f;
    f.open("vy.txt",ios::in);
    string s;
    string d;
    Sleep(20);
    while(!f.eof())
    {
        getline(f,s);
        cout <<s <<endl;
        Sleep(90);
    }
    f.close();
    return 0;
}