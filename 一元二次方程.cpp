/*
һԪ���η���
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,d,x1,x2;
    cin>>a>>b>>c;
    if(a==0)//һ�η���
        if(b==0) cout<<"error\n";
        else cout<< "x="<<-c/b<<endl;
    else
    {
        d=b*b-4*a*c;
        if(fabs(d)<=1e-6)//��==0��double��ֹ�����
        cout<<"x1=x2="<<-b/(2*a)<<endl;
        else    if(d>1e-6)
                {
                    x1=(-b+sqrt(d))/(2*a);
                    x2=(-b-sqrt(d))/(2*a);
                    cout<<"x1="<<x1<<",x2="<<x2<<endl;
                }
                else cout<<"������ʵ��\n";
  }
}

