/*
构造，拷贝，析构调用
拷贝：构造时对象赋值，参数值传递对象，函数返回值为对象
析构：对象结束，参数值传递对象结束，函数返回值对象返回
*/
#include <iostream>
using namespace std;

class A
{
private:
    static int n;

public:
    A() { cout << "A:" << ++n << endl; }
    A(const A& a) { cout << "A(const A&a):" << ++n << endl; }
    ~A() { cout << "~A:" << --n << endl; }
    void show() { cout << "show:" << n << endl; }

    void f1(A m)
    {
        cout << "f1.show:";
        m.show();
    }

    void f2(A* n)
    {
        cout << "f2*.show:";
        (*n).show();
    }

    void f3(A& s)
    {
        cout << "f3&.show:";
        s.show();
    }

    A fcopy()
    {
        cout << "fcopy.show:";
        return *this;
    }
};

int A::n = 0;

int main()
{
    A a; //1构造
    cout << "-----------------------------" << endl;
    A b[2]; //2构造
    cout << "-----------------------------" << endl;
    a.f1(a); //值传递使用拷贝构造
    a.f2(&a); //0构造
    a.f3(a); //0构造
    cout << "-----------------------------" << endl;
    {
        A c; //1构造
    }
    cout << "-----------------------------" << endl;
    A a2 = a; //值传递使用拷贝构造
    cout << "-----------------------------" << endl;
    A a3; //1构造
    a3 = a;
    a = a3;
    a3 = a; //不调用任何构造
    cout << "-----------------------------" << endl;
    a3 = a.fcopy(); //返回对象时调用拷贝构造，返回完成调用析构
    cout << "-----------------------------" << endl; //分别调用a3,a2,b[2],a的5次析构
}
