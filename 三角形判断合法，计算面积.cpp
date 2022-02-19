/*
设计一个三角形类Triangle
含参构造Triangle()判断合法性
成员函数area()计算面积
友元函数compute()计算两个面积和
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
	if(x+y>z&&x+z>y&&y+z>x)//三角形合法性判断
	{
		a=x;b=y;c=z;
	}
	else
	{
		cout<<"不是合法的三角形!"<<endl;
		exit(1);//构造函数无返回值，须结束程序
	}
}

double Triangle::area()
{
    double s;
    s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));//三角形面积一般公式
}

double compute(Triangle &t1,Triangle &t2)//友元函数不是函数成员，类外无Triangle::
{
	return t1.area()+t2.area();
}
int main()
{
	double x,y,z;
	cout<<"输入三角形1的三边长:";
	cin>>x>>y>>z;
	Triangle t1(x,y,z);
	cout<<"输入三角形2的三边长:";
	cin>>x>>y>>z;
	Triangle t2(x,y,z);
	cout<<"两三角形面积之和为:"<<compute(t1,t2)<<endl;
	return 0;
}
