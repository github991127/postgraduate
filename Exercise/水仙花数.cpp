/*
ˮ�ɻ�������λ������=�������λ��
*/
#include <iostream>
#include <string>
using namespace std;
//const int N=10;
bool shui(int x)
{
    int a,b,c;
    a=x/100; //�ֽ����λ
    b=x/10%10;//�ֽ��ʮλ
    c=x%10;//�ֽ����λ
    if (x==a*a*a+b*b*b+c*c*c)return 1;
    else return 0;
}
int main ()
{
    for(int i=100;i<1000;i++)
        if(shui(i))cout<<i<<endl;
}
