/*
抽象类Shape，抽象类定义变量
纯虚函数Area
虚析构~Shape

Shape派生类Rectangle
Shape派生类Circle
*/
#include<iostream>
using namespace std;
const double PI = 3.14;

class Shape
{
protected: //private错误，继承函数无法访问
    double x, y; //抽象类作为接口，不建议定义数据成员
public:
    void setshape(double x1, double y1 = 0)
    {
        x = x1;
        y = y1;
    } //不使用构造函数
    virtual double Area() const = 0;
    virtual ~Shape() =0; //无论纯与否，虚析构函数~Shape()必须有函数体
};

Shape::~Shape()
{
} //~Shape()函数体{}
class Rectangle : public Shape
{
public:
    double Area() const { return x * y; } //虚函数再定义
};

class Circle : public Shape
{
public:
    double Area() const { return x * x * PI; }
};

int main()
{
    Rectangle rec;
    rec.setshape(2, 5);
    Circle cir;
    cir.setshape(10);
    cout << "rec.Area()=" << rec.Area() << endl;
    cout << "cir.Area()=" << cir.Area() << endl;
    return 0;
}
