/*����N��AB֮����������ÿ�β�ͬ*/
#include <iostream>
#include<ctime>//srand()
using namespace std;
const int A=7,B=9,N=20;//AB֮��
int main ()
{
    if(A>=B){cout<<"��������߽磼�ұ߽�"<<endl;return 0;}
    int x,y,i;
    x=B-A+1;
    y=A;
    i=N;
    srand(time(0));//����seed,ÿ���������ͬ
    cout<<N<<"��"<<A<<"��"<<B<<"�������Ϊ��"<<endl;
    while(i--)cout<<rand()%x +y<<" ";
    cout<<endl;
}
