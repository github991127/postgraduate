/*
������new��������delete���Զ�
��������new����������ǰdelete���ֶ�
*/
#include<iostream>
using namespace std;
class A{
        int *a;
    public:
        A(int aa=0)
        {
            a=new int[aa];//ʹ�� aa ����ʼ����̬�ڴ档
            cout<<"A"<<endl;
        }
        ~A()
        {
            delete []a;//delete a;
            cout<<"B"<<endl;
        }
};
int main()
{
    int x=1,N=2;
    A a1(x);//����1������
    cout<<"----------------"<<endl;
    A a2[N];//����2���������
    cout<<"----------------"<<endl;
    A *p1=new A(x);
    delete p1;//����1����̬�����ֶ�����
    cout<<"----------------"<<endl;
    A *p2=new A[N];
    delete []p2;//����2����̬��������ֶ�����
    cout<<"----------------"<<endl;
}//�Ƕ�̬����������Զ�������1+2
