/*
动态联编3条件：继承，虚函数，指针引用调用
*/
#include <iostream>
using namespace std;

class A
{
private:
    int x;

public:
    A(int i) { x = i; }
    virtual void virfun() { cout << "A::x: " << x << endl; }
    virtual void virfun2(int i) { cout << "Aint: " << i << endl; }
};

class B : public A
{
private:
    int y;

public:
    B(int i, int j): A(i) { y = j; }
    void virfun() { cout << "B::y: " << y << endl; }
    void virfun2(double d) { cout << "Bdouble: " << d << endl; }
};

void fun(A* s)
{
    s->virfun(); //动态联编，s指向原有对象p属于的类B
    s->virfun2(2.5); //virfun2参数不同为重载函数不动态联编(虚函数参数须相同)s属于类A
}

int main()
{
    B* p = new B(0, 1);
    fun(p);
}
