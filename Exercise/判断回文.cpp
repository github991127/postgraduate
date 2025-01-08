/*
判断回文
*/
#include <iostream>
#include <cstring>
using namespace std;
const int N=100;
bool isPal(char *ch)
{
    int size=strlen(ch);
    bool flag=true;
    for(int i=0;i<size/2;i++)
        if(ch[i]!=ch[size-i-1])
        {
            flag=false;
            break;
        }
    if(flag)return 1;
    else    return 0;
}

int main( )
{
    char ch[N];
    while(1)
    {
        cout<<"输入一个字符串：";
        cin>>ch;
        if(isPal(ch))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
