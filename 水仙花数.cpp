/*
水仙花数：各位立方和=本身的三位数
*/
#include <iostream>
#include <string>
using namespace std;
//const int N=10;
bool shui(int x)
{
    int a,b,c;
    a=x/100; //分解出百位
    b=x/10%10;//分解出十位
    c=x%10;//分解出个位
    if (x==a*a*a+b*b*b+c*c*c)return 1;
    else return 0;
}
int main ()
{
    for(int i=100;i<1000;i++)
        if(shui(i))cout<<i<<endl;
}
