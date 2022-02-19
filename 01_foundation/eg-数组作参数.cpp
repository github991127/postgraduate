/*
数组作参数均为指针传递，有两种：数组名或指针，不希望改变原值，参数加const
*/
#include <iostream>
#include <string>
using namespace std;
const int N=10;
void f1(char ch2[])//[N]与f1等价
{
    (*ch2)++;
    cout<<*ch2<<endl;
}
void f2(char *p)//f1,f2等价，数组参数永远是指针传递
{
    (*p)++;
    cout<<*p<<endl;
}
void f3(const char ch3[])//若想不改变原数组，提前拷贝或声明const参数
{
    //(*ch3)++;错误
}
void f4(const char *p)//f3,f4等价
{
    const char *s=p++;//指向常量的指针，可改向不可改值，不能赋给非const
    cout<<*s<<endl;
    cout<<*p<<endl;
}
int main ()
{
    char ch[N]={65,66,70,68,69};
    cout<<ch<<endl;
    f1(ch);
    cout<<ch<<endl;
    f2(ch);
    cout<<ch<<endl;
    //f3(ch);
    //f4(ch);
}
