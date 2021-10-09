#include <bits/stdc++.h>
#include <string>
// #define N 1000005
#define fr(name) freopen(name,"r",stdin);
#define fw(name) freopen(name,"w",stdout);
#define For(value,begin,end,up) for(int value = begin;value <= end;value+=up)
// #define elf else if
// typedef unsigned long long ll;
// typedef basic_string<char>   string;
bool c(char s)
{
    if(s == 'a'||s=='i'||s=='u'||s=='e'||s=='o'||s=='y') return true;
    return false;
}
using namespace std;
int main()
{
    fr("CONTEST1.inp");
    fw("CONTEST1.out");
    string str;
    int n,sum(0);
    cin >> n;
    For(t,1,n,1)
    {
        cin >> str;
        // str+="m";
        For(i,0,str.length()-1,1)
        {
            if(c(str[i]))
                if(!c(str[i+1])) sum++;
        }
    }
    cout << sum;
    return 0;
}