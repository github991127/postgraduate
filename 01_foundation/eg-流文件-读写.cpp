/*
�ļ������o��д��������ݵ��ļ�<<
�ļ�������i��д���ļ����ݵ���Ļ>>read��get
�������int��double���ַ�����
*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a;double x;char str[10];
    char fname[]= "test2015.txt";//�ļ���
    cout<<"����int��double���ַ����飺"<<endl;
    cin>>a>>x>>str;//����д���������

    fstream iofile(fname,ios::out);
    if(!iofile) return 0;
    iofile<<a+1<<" "<<x+1<<" "<<str<<"!"<<endl;//<<д�����ݵ��ļ������ÿո��س�����
    iofile.close();

    int a1;double x1;char str1[10];
    iofile.open(fname,ios::in);
    if(!iofile) return 0;
    iofile>>a1>>x1>>str1;//>>�������ո��س�����һ��������������
    cout<<"a1="<<a1<<"\nx1="<<x1<<"\nstr1="<<str1<<endl;
}
