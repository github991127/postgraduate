/*
��̬����3�������̳У��麯����ָ�����õ���
*/
#include <iostream>
using namespace std;

class A
{
    private:
        int x;
    public:
        A(int i) {x=i;}
        virtual void virfun(){cout<< "A::x: "<<x<<endl;}
        virtual void virfun2(int i){cout<< "Aint: "<<i<<endl;}
};
class B:public A
{
    private:
        int y;
    public:
        B(int i,int j): A(i) {y=j;}
        void virfun(){cout<<"B::y: "<<y<<endl;}
        void virfun2(double d){cout<< "Bdouble: "<<d<<endl;}

};
void fun(A *s)
{
    s->virfun();//��̬���࣬sָ��ԭ�ж���p���ڵ���B
    s->virfun2(2.5);//virfun2������ͬΪ���غ�������̬����(�麯����������ͬ)s������A
}

int main()
{
    B *p=new B(0,1) ;
    fun(p);
}
