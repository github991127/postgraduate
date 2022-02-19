/*
0 'NULL'|48 '0'|65 'A'|97 'a'
定义字符转化为char型
比较字符转化为int型ASCII
*/
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    int i=0;
    char ch[50]={'2','0','a',(char)57,57,0,57};
    //cout<<"'a'-'0'=97-48="<<ch[2]-ch[1]<<endl;
    cout<<ch<<endl;//0为NULL,截止输出
    while(ch[i])
    {
        if(ch[i]>0)cout<<ch[i];
        i++;
    }
    cout<<endl;
    i=0;
    while(ch[i])
    {
        if(ch[i]>'0')cout<<ch[i];//'0'即48
        i++;
    }
}
