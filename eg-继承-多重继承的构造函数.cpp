/*
���ؼ̳й���˳�򣺻��๹�죬��Ա�����졾Base�̳�˳��--b1����˳�򡿣��������Լ��ĺ�����
*/
#include <iostream>
#include <string>
using namespace std;
class Base1
{ public:
	    Base1( int i ) { cout << "���û���Base1�Ĺ��캯��:" << i << endl ; }
	    ~Base1() { cout << "��������Base1" << endl ; }
};
class Base2
{ public:
	    Base2( int j ) { cout << "���û���Base2�Ĺ��캯��:" << j << endl ; }
	    ~Base2() { cout << "��������Base2" << endl ; }
};

class A: public Base2, public Base1//�̳�˳�����Base2(a), Base1(b)˳��
{ public:
//A( int a, int b, int c, int d ) : Base1(a), Base2(b), b1(c), b2(d)//2143
A( int a, int b, int c, int d ) : b1(a),Base1(b),b2(c),Base2(d)//4231
       {cout << "����������A�Ĺ��캯��:" << a+b+c+d << endl;}
~A()
       {cout << "����������A" << endl;}
private://����˳�����b2(c), b1(d)˳��
	    Base2 b2;
	    Base1 b1;
};

int main()
{
    A obj( 1, 2, 3, 4 );//˳�򣺻��๹�죬��Ա�����죬�������Լ��ĺ�����
    cout << "-----------------------------" << endl;
    A obj2=obj;//ֻ����������(��������)
    cout << "-----------------------------" << endl;
    //A &obj3=obj;//������������
    cout << "-----------------------------" << endl;
}
