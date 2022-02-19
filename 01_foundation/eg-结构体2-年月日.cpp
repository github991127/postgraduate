/*
结构体Date包含年月日
int days (struct Date &a)返回当年第几天
*/
#include <iostream>
#include <string>
using namespace std;
//const int N=10;
struct Date{
    int y,m,d;
};
int days (struct Date &a)//定义须带关键字struct
{
    int mou[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int sum=a.d;
    for(int i=0;i<a.m-1;i++)sum+=mou[i];
    if( (a.y%4==0&&a.y%100!=0||a.y%400==0)&&a.m>2 )sum++;
    return sum;
}
int main ()
{
    struct Date d1={2020,3,1},d2={2021,3,1};//初始化须用{}
    cout<<d1.y<<"年"<<d1.m<<"月"<<d1.d<<"日是当年第"<<days(d1)<<"天"<<endl;
    cout<<d2.y<<"年"<<d2.m<<"月"<<d2.d<<"日是当年第"<<days(d2)<<"天"<<endl;
}
