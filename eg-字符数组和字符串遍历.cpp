/*
��Сдת��
*/
#include <iostream>
#include <string>
using namespace std;
const int N=10;

void ch()//�ַ������д��Сд
{
    char a[N];
    cin>>a;
    char *s=a;
    //a++;������a��ͬ��ָ�룬��Ȼa�ǵ�ַ���ǲ���a++
    while(*s)//ͨ��ָ�룬����ĳ���strlen������a[N]�����жϽ���
    {
        if(*s>=65&&*s<=90)*s+=32;
        s++;
    }
    cout<<a<<endl;
}

void str()//�ַ���Сд����д
{
    int i=0;
    string a;
    cin>>a;
    //char *s=a;//string������󣬲���ͨ��ָ��ȷ���ַ�λ��
    while(i<a.length())//ͨ������ĳ���length������a[N]�����жϽ���
    {
        if(a[i]>=97&&a[i]<=122)a[i]-='a'-'A';//string������൱��һ�����ȿɱ�����
        i++;
    }
    cout<<a<<endl;
}

int main()
{
    ch();
    str();
}
