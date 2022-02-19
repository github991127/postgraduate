/*
大小写转换
*/
#include <iostream>
#include <string>
using namespace std;
const int N=10;

void ch()//字符数组大写换小写
{
    char a[N];
    cin>>a;
    char *s=a;
    //a++;数组名a不同于指针，虽然a是地址但是不能a++
    while(*s)//通过指针，输入的长度strlen，或用a[N]内容判断结束
    {
        if(*s>=65&&*s<=90)*s+=32;
        s++;
    }
    cout<<a<<endl;
}

void str()//字符串小写换大写
{
    int i=0;
    string a;
    cin>>a;
    //char *s=a;//string是类对象，不能通过指针确定字符位置
    while(i<a.length())//通过输入的长度length，或用a[N]内容判断结束
    {
        if(a[i]>=97&&a[i]<=122)a[i]-='a'-'A';//string类对象相当于一个长度可变数组
        i++;
    }
    cout<<a<<endl;
}

int main()
{
    ch();
    str();
}
