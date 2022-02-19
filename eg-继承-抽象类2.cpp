/*
������Shape�������ඨ�����
���麯��Area
������~Shape

Shape������Rectangle
Shape������Circle
*/
#include<iostream>
using namespace std;
const double PI = 3.14;

class Shape{
protected://private���󣬼̳к����޷�����
	double x,y;//��������Ϊ�ӿڣ������鶨�����ݳ�Ա
public:
    void setshape(double x1,double y1=0){x=x1;y=y1;}//��ʹ�ù��캯��
	virtual double Area() const = 0;
	virtual ~Shape()=0;                                         //���۴��������������~Shape()�����к�����
};
Shape::~Shape(){}                                                //~Shape()������{}
class Rectangle : public Shape{
public:
	double Area() const {return x*y;}                 //�麯���ٶ���
};

class Circle : public Shape{
public:
	double Area() const {return x*x*PI;}
};

int main(){
	Rectangle rec;rec.setshape(2,5);
	Circle cir;cir.setshape(10);
	cout << "���������" << rec.Area() <<endl;
	cout << "Բ�����" << cir.Area() <<endl;
	return 0;
}
