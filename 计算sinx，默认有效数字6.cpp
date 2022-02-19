/*
calsin (double x,double precision=1E-6)计算sinx，默认精度有效数字6
增项＜精度，不加该增项
*/
#include <iostream>
#include <cmath>
using namespace std;
//const int N=10;
double calsin (double x,double precision=1E-6)
{
    double sin=0,a=x;
    for(int i=1;fabs(a)>=precision;i++)//fabs(a)>precision确定精度是否满足，a为增项而非和
    {
        sin+=a;
        a=-a*x*x/(2*i)/(2*i+1);
    }
    return sin;
}
int main ()
{
    double a=-3.14/1;
    //cin>>a;
    cout<<a<<endl<<calsin(a)<<endl;
}
