/*
int��ÿһλ��ŵ������У����intλ��
*/

#include <iostream>
using namespace std;
const int N=100;
int main ()
{
    int i,x,num[N],s=1,a,b=0,c;
    cin>>x;
    cout<<"reverse:";
    for(i=0;a!=x;i++)
    {
        a=x%(10*s);
        num[i]=a/s;//num[i]=(a-b)/s;b=a;//int������ȥС������
        cout<<num[i]<<' ';
        s*=10;
    }
    c=i;
    cout<<endl<<"order:";
    while(i--)
    {
        cout<<num[i]<<' ';
    }
    cout<<endl<<"count:"<<c;
}




