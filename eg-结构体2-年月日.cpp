/*
�ṹ��Date����������
int days (struct Date &a)���ص���ڼ���
*/
#include <iostream>
#include <string>
using namespace std;
//const int N=10;
struct Date{
    int y,m,d;
};
int days (struct Date &a)//��������ؼ���struct
{
    int mou[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int sum=a.d;
    for(int i=0;i<a.m-1;i++)sum+=mou[i];
    if( (a.y%4==0&&a.y%100!=0||a.y%400==0)&&a.m>2 )sum++;
    return sum;
}
int main ()
{
    struct Date d1={2020,3,1},d2={2021,3,1};//��ʼ������{}
    cout<<d1.y<<"��"<<d1.m<<"��"<<d1.d<<"���ǵ����"<<days(d1)<<"��"<<endl;
    cout<<d2.y<<"��"<<d2.m<<"��"<<d2.d<<"���ǵ����"<<days(d2)<<"��"<<endl;
}
