/*
���һ����������Triangle
���ι���Triangle()�жϺϷ���
��Ա����area()�������
��Ԫ����compute()�������������
*/
#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
    private:
        double a,b,c;
    public:
        Triangle(double x,double y,double z);
        double area();
        friend double compute(Triangle&t1,Triangle&t2);
};

Triangle::Triangle(double x,double y,double z)
{
	if(x+y>z&&x+z>y&&y+z>x)//�����κϷ����ж�
	{
		a=x;b=y;c=z;
	}
	else
	{
		cout<<"���ǺϷ���������!"<<endl;
		exit(1);//���캯���޷���ֵ�����������
	}
}

double Triangle::area()
{
    double s;
    s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));//���������һ�㹫ʽ
}

double compute(Triangle &t1,Triangle &t2)//��Ԫ�������Ǻ�����Ա��������Triangle::
{
	return t1.area()+t2.area();
}
int main()
{
	double x,y,z;
	cout<<"����������1�����߳�:";
	cin>>x>>y>>z;
	Triangle t1(x,y,z);
	cout<<"����������2�����߳�:";
	cin>>x>>y>>z;
	Triangle t2(x,y,z);
	cout<<"�����������֮��Ϊ:"<<compute(t1,t2)<<endl;
	return 0;
}
