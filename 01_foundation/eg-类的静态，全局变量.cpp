/*
��̬���� ��::sum����
��̬���� ��::sum���ʣ�����.sum����
ȫ�ֱ��� ::sum����
��̬��Ա�������ܷ��ʷǾ�̬��Ա
*/
#include <iostream>
using namespace std;
int sum=5;//ȫ�ֱ���5

class Mod{
    private:static int sum;
            int i;
    public:static int getsum(){return sum;}//return i���󣬾�̬��Ա�������ܷ��ʷǾ�̬��Ա
            //static int getsum(Mod &a){return a.i;}//��ȷ
            void show () { cout<<::sum<<','<<sum<<'\n' ;}//::sumָȫ�ֱ���5
};
int Mod::sum=1;//ȫ�ֱ�����ʼ��

int main ()
{
    cout<<Mod::getsum()<<endl;//��̬������ʹ��ʵ��������Ҳ��ͨ��������������������
    Mod a;cout<<a.getsum()<<endl;
    cout<<"--------------------"<<endl;
    a.show();
    //Mod::sum++;//���ⲻ�ɷ���˽��
    static Mod b;b.show();
    sum++;
    a.show();
}
