/*
������������Ϊָ�봫�ݣ������֣���������ָ�룬��ϣ���ı�ԭֵ��������const
*/
#include <iostream>
#include <string>
using namespace std;
const int N=10;
void f1(char ch2[])//[N]��f1�ȼ�
{
    (*ch2)++;
    cout<<*ch2<<endl;
}
void f2(char *p)//f1,f2�ȼۣ����������Զ��ָ�봫��
{
    (*p)++;
    cout<<*p<<endl;
}
void f3(const char ch3[])//���벻�ı�ԭ���飬��ǰ����������const����
{
    //(*ch3)++;����
}
void f4(const char *p)//f3,f4�ȼ�
{
    const char *s=p++;//ָ������ָ�룬�ɸ��򲻿ɸ�ֵ�����ܸ�����const
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
