/*
switch(ch)
*/
#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int a=0,b=0,x=0,y=0,i=0;
    char ch='a';
//  char ch='b';
//  char ch='c';
    switch(ch)
    {
        case'a':case'A':a++;       //并列case：中间无连接符号
        case'b':case'B':{b++;b++;}//不加break后面所有case都会执行
        case'z':x++;x++;x++;break;//case无须加{},会执行case全部语句
//      case'A':i++;               //任何case都不得相同
//      case x:i++;                //case后必须为int char常量
        default:y++;               //所有case都不执行,执行default
    }
    cout<<a<<b<<x<<y;
}
