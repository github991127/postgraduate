/*
输入年月日推算当天是周几
求9999年12月31日是周五
*/
#include <iostream>
using namespace std;

bool is_leapyear(int y1)
{
    if(y1%4==0&&y1%100!=0||y1%400==0)return true;
    else return false;
}

int cal_leapyear(int y1,int y2)
{
    int a=0;
    while(++y1<y2)if(is_leapyear(y1))a++;
    return a;
}

int main ()
{
    int y,m,d;
    int count=0,dif;//count代表中间的闰年数，dif代表年份差
    int month[12]={4,0,0,3,5,1,3,6,2,4,0,2};//2021月份表
    cout<<"请输入年"<<endl;
    cin>>y;
    dif=y-2021;
    if(dif>0)
    {
        count=cal_leapyear(2021,y);
        if(is_leapyear(y))for(int i=2;i<=11;i++)month[i]++;
        for(int i=0;i<=11;i++)month[i]=(month[i]+dif+count)%7;

    }
    else if(dif<0)
    {
        count=cal_leapyear(y,2021);
        if(is_leapyear(y))for(int i=0;i<=1;i++)month[i]--;
        for(int i=0;i<=11;i++)month[i]=(month[i]+2023+dif-count)%7;
    }
    //cout<<y<<"年的月份表：";
    //for(int i=0;i<=11;i++)cout<<month[i]<<" ";
    //cout<<endl;
    cout<<"请输入月和日"<<endl;
    cin>>m>>d;
    cout<<y<<"年"<<m<<"月"<<d<<"日是周"<<(month[--m]+d)%7<<endl;
}
