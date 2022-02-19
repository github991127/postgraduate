/*
除法的表达式结果
*/
#include <iostream>
using namespace std;
int main ()
{
    int i;
    double d1,d2,d3;
    double x=2;
    i=5/2;
    d1=5/2;//计算结果为int型，转换为double型但小数点已被舍去
    d2=5/2.0;
    d3=5/x;//计算结果为double型（表达式精度最高类型）
    cout<<i<<endl;
    cout<<d1<<endl;
    cout<<d2<<endl;
    cout<<d3<<endl;
}
