/*
������Shape�����ඨ�����
���麯��Area
������~Shape

Shape������Rectangle
Shape������Circle
*/
#include<iostream>
using namespace std;
const double PI = 3.14;

class Shape{
public:
	virtual double Area() const = 0;
	virtual ~Shape()=0;                                         //���۴��������������~Shape()�����к�����
};
Shape::~Shape(){}                                                //~Shape()������{}
class Rectangle : public Shape{
private:
	double length;
	double width;
public:
	Rectangle(double l,double w):length(l),width(w){}
	double Area() const {return length*width;}                 //�麯���ٶ���
};

class Circle : public Shape{
private:
	double R;
public:
	Circle(double r):R(r){}
	double Area() const {return R*R*PI;}
};

int main(){
	Rectangle rec(2,5);
	Circle cir(10);
	cout << "���������" << rec.Area() <<endl;
	cout << "Բ�����" << cir.Area() <<endl;
	return 0;
}
