#include <iostream>
#include <iomanip>
using namespace std;

//精度
void F1()
{
    double x = 123.45555;
    double y = 123.44444;
    double z = 123456789;

    cout << x << endl;
    cout << y << endl; //默认精度6，四舍五入
    cout << z << endl; //整数数字位＞6，强制科学记数法（1.23456）
}

//宽度
void F2()
{
    double x = 123.456789;

    cout.width(10);
    cout << x << endl; //仅本次生效
    cout << x << endl;

    cout << setw(9) << x << endl; //仅本次生效，头文件iomanip
    cout << x << endl;
}

//进制
void F3()
{
    int x = 15;
    cout << x << endl;
    cout << oct << x << endl;
    cout << dec << x << endl;
    cout << hex << x << endl;
}

//符号
void F4()
{
    double x = 123.456789;
    cout << x << endl;
    cout.precision(2); //全局保持生效.整数位不够的强制科学记数法，先取x位（x为精度）
    cout << x << endl;
    cout.setf(ios::showpos);
    cout << x << endl;
    cout.setf(ios::scientific); //科学记数法，e前小数点后x位（x为精度）。与强制不同
    cout << x << endl;
}


int main()
{
    // F1();
    // F2();
    // F3();
    F4();
}
