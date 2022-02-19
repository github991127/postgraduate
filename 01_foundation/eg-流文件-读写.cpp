/*
文件输出流o：写入键盘内容到文件<<
文件输入流i：写出文件内容到屏幕>>read，get
输入输出int，double，字符数组
*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a;double x;char str[10];
    char fname[]= "test2015.txt";//文件名
    cout<<"输入int，double，字符数组："<<endl;
    cin>>a>>x>>str;//键盘写入变量内容

    fstream iofile(fname,ios::out);
    if(!iofile) return 0;
    iofile<<a+1<<" "<<x+1<<" "<<str<<"!"<<endl;//<<写入内容到文件必须用空格或回车隔开
    iofile.close();

    int a1;double x1;char str1[10];
    iofile.open(fname,ios::in);
    if(!iofile) return 0;
    iofile>>a1>>x1>>str1;//>>当遇到空格或回车，第一个变量读出结束
    cout<<"a1="<<a1<<"\nx1="<<x1<<"\nstr1="<<str1<<endl;
}
