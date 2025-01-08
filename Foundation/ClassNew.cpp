/*
构造内new，析构内delete，自动
函数体内new，函数结束前delete，手动
*/
#include<iostream>
using namespace std;

class A
{
    int* a;

public:
    A(int aa = 0)
    {
        a = new int[aa]; //使用 aa 来初始化动态内存。
        cout << "A" << endl;
    }

    ~A()
    {
        delete []a; //delete a;
        cout << "B" << endl;
    }
};

int main()
{
    const int x = 1, N = 2;
    A a1(x); //创建1个对象
    cout << "----------------" << endl;
    A a2[N]; //创建2个数组对象
    cout << "----------------" << endl;
    A* p1 = new A(x);
    delete p1; //创建1个动态对象，手动析构
    cout << "----------------" << endl;
    A* p2 = new A[N];
    delete []p2; //创建2个动态数组对象，手动析构
    cout << "----------------" << endl;
} //非动态对象结束，自动析构，1+2
