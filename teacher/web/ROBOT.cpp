#include<bits/stdc++.h>
#include<string>
// #define N 1000005
#define fr(name) freopen(name,"r",stdin);
#define fw(name) freopen(name,"w",stdout);
#define For(value,begin,end,up) for(int value = begin;value <= end;value+=up)
// #define Forl(value,begin,end,up) for(int value = begin;value >= end;value-=up)
#define elf else if
// typedef unsigned long long ll;
using namespace std;

int n,x(0),y(0);
//Gán giá trị cố định cho biến để khi thay đổi hướng dựa vào giá trị này để tính toán
int  G=1,R=2,L=3,B=4; 

void tinhtoan(int s)//Hàm này tính theo giá trị đã quy ước
{
	if(s == 1) y++;
	elf(s == 2) x++;
	elf(s == 3) x--;
	else y--;
}

int cd(char s)//chuyển đổi kiểu kí tự về dạng số nguyên mà ta đã gán
{
	if(s == 'G') return G;
	elf(s == 'R') return R;
	elf(s == 'L') return L;
	else return B;
}

void traodoi(char x) // Hàm này dùng để tráo đổi các hướng
{
	if(x == 'R')//Nếu là R tức là sang phải
	{
		swap(G,R);//đổi hướng trước mặt sang phải
		swap(B,L);//đổi hướng sau sang trái
		swap(R,L);// vì 2 bước trên nên phải trái bị tráo cho nhau
	}elf(x == 'L')//Hướng trái
	{
		swap(G,L);//tướng tự như trên
		swap(B,R);
		swap(R,L);
	}
	elf(x == 'B')
	{
		swap(R,L);//Đổi trái phải cho nhau
		swap(G,B);//Đổi phía sau thành phía trước
	}
	//G giữ nguyên  
}
int main()
{
    fr("ROBOT.inp");
    fw("ROBOT.out");
	string s;
	cin >> n >> s;//Vì s là các kí tự sát nhau nên ko cần getline()
	For(i,0,n-1,1) 
	{
		tinhtoan(cd(s[i]));
		traodoi(s[i]);
	}
	cout << x << " " << y;
    return 0;
}