/*
�������������㵱�����ܼ�
��9999��12��31��������
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
    int count=0,dif;//count�����м����������dif������ݲ�
    int month[12]={4,0,0,3,5,1,3,6,2,4,0,2};//2021�·ݱ�
    cout<<"��������"<<endl;
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
    //cout<<y<<"����·ݱ�";
    //for(int i=0;i<=11;i++)cout<<month[i]<<" ";
    //cout<<endl;
    cout<<"�������º���"<<endl;
    cin>>m>>d;
    cout<<y<<"��"<<m<<"��"<<d<<"������"<<(month[--m]+d)%7<<endl;
}
