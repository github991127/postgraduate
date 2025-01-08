/*
calsin (double x,double precision=1E-6)����sinx��Ĭ�Ͼ�����Ч����6
������ȣ����Ӹ�����
*/
#include <iostream>
#include <cmath>
using namespace std;
//const int N=10;
double calsin (double x,double precision=1E-6)
{
    double sin=0,a=x;
    for(int i=1;fabs(a)>=precision;i++)//fabs(a)>precisionȷ�������Ƿ����㣬aΪ������Ǻ�
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
