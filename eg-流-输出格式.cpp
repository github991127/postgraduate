#include <iostream>
#include <iomanip>
using namespace std;

void f1()
{
    double x=123.45555;
    double y=123.44444;
    double z=123456789;

    cout<<x<<endl;//
    cout<<y<<endl;//Ĭ�Ͼ���6����������
    cout<<z<<endl;//��������λ��6��ǿ�ƿ�ѧ��������1.23456��
}
void f2()
{
    double x=123.456789;

    cout.width(10);cout<<x<<endl;//��������Ч
    cout<<x<<endl;

    cout<<setw(9)<<x<<endl;//��������Ч��ͷ�ļ�iomanip
    cout<<x<<endl;
}
void f3()
{
    int x=15;
    cout<<x<<endl;
    cout<<oct<<x<<endl;
    cout<<dec<<x<<endl;
    cout<<hex<<x<<endl;
}
void f4()
{
    double x=123.456789;
    cout<<x<<endl;
    cout.precision(2);//ȫ�ֱ�����Ч//����λ������ǿ�ƿ�ѧ����������ȡxλ��xΪ���ȣ�
    cout<<x<<endl;
    cout.setf(ios::showpos);
    cout<<x<<endl;
    cout.setf(ios::scientific);//��ѧ��������eǰС�����xλ��xΪ���ȣ�����ǿ�Ʋ�ͬ
    cout<<x<<endl;
}
void f5()
{
    double x=123.456789;
    cout<<x<<endl;
    cout.precision(2);
    cout<<x<<endl;
    cout.setf(ios::showpos);
    cout<<x<<endl;
    cout.setf(ios::scientific);
    cout<<x<<endl;

}

int main ()
{
    char ch[]="----------------------";
    f1();cout<<ch<<endl;
    f2();cout<<ch<<endl;
    f3();cout<<ch<<endl;
    f4();cout<<ch<<endl;
    f5();
}
