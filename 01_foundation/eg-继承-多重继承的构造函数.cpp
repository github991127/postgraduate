/*
多重继承构造顺序：基类构造，成员对象构造【Base继承顺序--b1声明顺序】，派生类自己的函数体
*/
#include <iostream>
#include <string>
using namespace std;
class Base1
{ public:
	    Base1( int i ) { cout << "调用基类Base1的构造函数:" << i << endl ; }
	    ~Base1() { cout << "析构基类Base1" << endl ; }
};
class Base2
{ public:
	    Base2( int j ) { cout << "调用基类Base2的构造函数:" << j << endl ; }
	    ~Base2() { cout << "析构基类Base2" << endl ; }
};

class A: public Base2, public Base1//继承顺序决定Base2(a), Base1(b)顺序
{ public:
//A( int a, int b, int c, int d ) : Base1(a), Base2(b), b1(c), b2(d)//2143
A( int a, int b, int c, int d ) : b1(a),Base1(b),b2(c),Base2(d)//4231
       {cout << "调用派生类A的构造函数:" << a+b+c+d << endl;}
~A()
       {cout << "析构派生类A" << endl;}
private://声明顺序决定b2(c), b1(d)顺序
	    Base2 b2;
	    Base1 b1;
};

int main()
{
    A obj( 1, 2, 3, 4 );//顺序：基类构造，成员对象构造，派生类自己的函数体
    cout << "-----------------------------" << endl;
    A obj2=obj;//只析构不构造(拷贝构造)
    cout << "-----------------------------" << endl;
    //A &obj3=obj;//不析构不构造
    cout << "-----------------------------" << endl;
}
