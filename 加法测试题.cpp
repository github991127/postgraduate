/*һλ����Ӳ�����*/
#include<iostream>
#include<ctime>//srand()
using namespace std;
int main()
{
    int x,y,z;
    srand(time(0));//����seed,ÿ���������ͬ
    while(1)
    {
    x = rand() % 10;//�����ȡ��
    y = rand() % 10;
    cout<<x<<" + "<<y<<" = ";
    cin>>z;
    while( z != x+y )
    {
      cout<<"��������\n" ;
      cout<<x<<" + "<<y<<" = ";
      cin>>z;
    }
    cout<<"��\n" ;
    }
}
