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
        case'a':case'A':a++;       //����case���м������ӷ���
        case'b':case'B':{b++;b++;}//����break��������case����ִ��
        case'z':x++;x++;x++;break;//case�����{},��ִ��caseȫ�����
//      case'A':i++;               //�κ�case��������ͬ
//      case x:i++;                //case�����Ϊint char����
        default:y++;               //����case����ִ��,ִ��default
    }
    cout<<a<<b<<x<<y;
}
