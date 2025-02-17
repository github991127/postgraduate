/*
静态变量 类::sum访问
静态函数 类::sum访问，对象.sum访问
全局变量 ::sum访问
静态成员函数不能访问非静态成员
*/
#include <iostream>
using namespace std;
int sum = 5;

class Mod
{
private:
    static int sum;
    int i;

public:
    static int getsum() { return sum; }
    // static int getsum() { return i; }//❎静态成员函数不能访问非静态成员
    // static int getsum(Mod &a){return a.i;}//✔️
    void show() { cout << ::sum << ',' << sum << '\n'; } //::sum指全局变量5
};

int Mod::sum = 1;

int main()
{
    cout << Mod::getsum() << endl; //静态函数即使不实例化对象，也可通过类名：：函数名调用
    Mod a;
    cout << a.getsum() << endl;
    cout << "--------------------" << endl;

    a.show(); //5,1
    //Mod::sum++;//❎类外不可访问私有
    static Mod b;
    b.show(); //5,1
    sum++;
    a.show(); //6,1
}
