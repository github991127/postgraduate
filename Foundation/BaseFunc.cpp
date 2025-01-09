#include <iostream>
#include <string>
using namespace std;

void SwitchFunc()
{
    int a = 0, b = 0, c = 0, d = 0;
    char ch = 'a';
    //  char ch='B';
    //  char ch='C';
    //  char ch='D';
    switch (ch)
    {
    case'a': //case后必须为int char常量
    case'A': a = 1; //并列case
    //case'A':a++; //任何case都不得相同
    case'B': //不加break,后面所有case都会成功匹配执行
        {
            b = 2;
        }
    case'C':
        {
            c = 3;
            break;
        } // case无须加{},会执行case全部语句
    case'D': d = 4;
    default: d++; //所有case都不执行,执行default
    }
    cout << a << ' ' << b << ' ' << c << ' ' << d; //1 2 3 0
}

void DivideFunc()
{
    int i;
    double d1, d2, d3;
    double x = 2;
    i = 5 / 2;
    d1 = 5 / 2; //计算结果为int型，转换为double型，但小数点已被舍去
    d2 = 5 / 2.0;
    d3 = 5 / x; //计算结果为double型
    cout << i << ' ' << d1 << ' ' << d2 << ' ' << d3 << endl; //2 2 2.5 2.5
}

int main()
{
    SwitchFunc();
    // DivideFunc();
}
