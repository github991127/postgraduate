/*
基类circle有虚函数area()，volume()
子类sphere，colume实现
主函数动态联编指针调用
*/
#include <iostream>
using namespace std;
const double pi = 3.14;

class circle
{
protected:
    double radius;

public:
    circle(double r) { radius = r; }
    virtual double area() { return pi * radius * radius; }
    virtual double volume() { return 0; }
};

class sphere : public circle
{
public:
    sphere(double r): circle(r)
    {
    }

    double area() { return 4 * pi * radius * radius; }
    double volume() { return 4 / 3.0 * pi * radius * radius * radius; }
};

class colume : public circle
{
private:
    double height;

public:
    colume(double r, double h): circle(r) { height = r; }
    double area() { return (2 * pi * radius * radius + 2 * pi * radius * height); }
    double volume() { return pi * radius * radius * height; }
};

int main()
{
    double r = 2, h = 3;
    cout << "please input radius and height" << endl;
    // cin>>r>>h;
    circle* p;
    sphere s(r);
    colume c(r, h);
    p = &s;
    cout << "sphere's area is" << p->area() << endl;
    cout << "sphere's volume is" << p->volume() << endl;
    p = &c;
    cout << "colume's area is" << p->area() << endl;
    cout << "colume's volume is" << p->volume() << endl;
}
