#include <iostream>
#include <string>
using namespace std;

void SwitchFunc()
{
    int a = 0, b = 0, c = 0, x = 0;
    char ch = 'a';
    //  char ch='b';
    //  char ch='c';
    switch (ch)
    {
    case'a':
    case'A': a++; //并列case：中间无连接符号
    case'b':
    case'B':
        {
            b = 2;
        } //不加break后面所有case都会执行
    case'z': c = 3;
        break; //case无须加{},会执行case全部语句
    //      case'A':x++;               //任何case都不得相同
    //      case x:x++;                //case后必须为int char常量
    default: x++; //所有case都不执行,执行default
    }
    cout << a << b << c << x; //1230
}

void DivideFunc()
{
    int i;
    double d1, d2, d3;
    double x = 2;
    i = 5 / 2;
    d1 = 5 / 2; //计算结果为int型，转换为double型但小数点已被舍去
    d2 = 5 / 2.0;
    d3 = 5 / x; //计算结果为double型
    cout << i << ' ' << d1 << ' ' << d2 << ' ' << d3 << endl; //2 2 2.5 2.5
}

int main()
{
    // SwitchFunc();
    DivideFunc();
}
