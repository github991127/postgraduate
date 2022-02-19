/*
抽象类Shape，子类定义变量
纯虚函数Area
虚析构~Shape

Shape派生类Rectangle
Shape派生类Circle
*/
#include<iostream>
using namespace std;
const double PI = 3.14;

class Shape{
public:
	virtual double Area() const = 0;
	virtual ~Shape()=0;                                         //无论纯与否，虚析构函数~Shape()必须有函数体
};
Shape::~Shape(){}                                                //~Shape()函数体{}
class Rectangle : public Shape{
private:
	double length;
	double width;
public:
	Rectangle(double l,double w):length(l),width(w){}
	double Area() const {return length*width;}                 //虚函数再定义
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
	cout << "矩形面积：" << rec.Area() <<endl;
	cout << "圆面积：" << cir.Area() <<endl;
	return 0;
}
