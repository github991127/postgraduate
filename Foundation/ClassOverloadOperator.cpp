/*
运算符重载
&operator返回引用，仅流运算符必须，在返回类内新创建变量的引用非法
单目，比较，带=建议重载为成员函数
赋值=下标[]调用()成员->必须重载为成员函数
流<<>>必须重载为友元函数
*/
#include <iostream>
using namespace std;

class A
{
private:
    int i;

public:
    A(int i1): i(i1)
    {
    }

    ~A()
    {
    }

    //int operator+(const A &a){return i+a.i;}
    friend int operator+(const A& a, const A& b) { return a.i + b.i; } //其他建议重载为友元函数
    A operator+=(const A& a)
    {
        i += a.i;
        return *this;
    }

    //friend A operator+=(A &a,const A &b){a.i+=b.i;return a;}//单目，比较，带=建议重载为成员函数
    bool operator>=(const A& a) { return i >= a.i; }

    A& operator++()
    {
        ++i;
        return *this;
    } //&operator不影响
    A operator++(int)
    {
        A tmp = *this;
        i++;
        return tmp;
    } //必须不是&operator，返回类内新创建变量的引用非法
    friend ostream& operator<<(ostream& os, const A& a)
    {
        os << a.i;
        return os;
    } //必须是&operator
};

int main()
{
    A a1(1), a2(2);
    cout << a1 + a2 << endl;
    cout << (a1 += a2) << endl; //+=优先级低，须加括号，建议全部加括号
    cout << (a1 >= a2) << endl;
    cout << ++a1 << endl;
    cout << a1++ << endl;
    cout << a1 << endl;
}
