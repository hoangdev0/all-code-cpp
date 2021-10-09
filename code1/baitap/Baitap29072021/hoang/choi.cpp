#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,c,i=1,win=0,de=0,pe=0;
	do{
	cout << "Chon: \n 1.Bua \n 2.Keo \n 3.Bao\n";
	cin >> n;
	if(n>=1&&n<=3)
	cout << "Ban chon : ";
	if(n==1) cout <<  "Ban chon bua";
	else if(n==2) cout <<"Ban chon keo";
	else if(n==3) cout <<"Ban chon bao";
	srand(time(NULL));
	int nn = rand() % (3-1+1) + 1;
	if(n>=1&&n<=3){
	cout << "\nMay chon : ";
	if(nn==1) cout <<  "May chon bua";
	else if(nn==2) cout <<"May chon keo";
	else if(nn==3) cout <<"May chon bao";
	}
	//cin.get(c);
	//cin >> c;
	if(n==1&&nn==1) {pe++;cout<<"\n\t==>Peace";}
	else if(n==2&&nn==2) {pe++;cout<<"\n\t==>Peace";}
	else if(n==3&&nn==3) {pe++;cout<<"\n\t==>Peace";}
	else if(n==2&&nn==1) {de++;cout<<"\n\t==>Defeat";}
	else if(n==1&&nn==3) {de++;cout<<"\n\t==>Defeat";}
	else if(n==3&&nn==2) {de++;cout<<"\n\t==>Defeat";}
	else if(n==1&&nn==2) {win++;cout<<"\n\t==>Win";}
	else if(n==2&&nn==3) {win++;cout<<"\n\t==>Win";} 
	else if(n==3&&nn==1) {win++;cout<<"\n\t==>Win";}
	cout << endl;
	system("pause");
	system("cls");
	i++;
	}while(i<=10);
	cout << "\tSo lan ban thang: " << win;
	cout << "\n\tSo lan ban thua: " << de;
	cout << "\n\tSo lan hoa: " << pe;
	cout << endl;
	if(win > de) cout << "\t\tYOU WIN";
	else if(win < de) cout << "\t\tYOU DEFEAT";
	else cout<<"\t\tPEACE";
	return 0;
}