/*
class person
class doctor��̳�person
class teacher��̳�person
class doctor_teacher�̳�doctor��teacher
*/
#include <iostream>
#include <string>
using namespace std;

class person{
    private://����protected
        string name;
    public:
        void setperson(string n){name=n;}//��ʹ�ù��캯��
        void displayperson(){cout<<"������"<<name<<endl;}
};

class doctor:virtual public person{
    private:
        string depart;
    public:
        void setdoctor(string d){depart=d;}//���ø����ำֵ
        void displaydoctor(){cout<<"ҽԺ���š�"<<depart<<endl;}
};

class teacher:virtual public person{
    private:
        string depart;
    public:
        void setteacher(string d2){depart=d2;}
        void displayteacher(){cout<<"ѧУ���š�"<<depart<<endl;}
};

class doctor_teacher: public doctor,public teacher{
    public:
        void setdoctor_teacher(string n,string d,string d2){setperson(n);setdoctor(d);setteacher(d2);}
        void displaydoctor_teacher(){displayperson();displaydoctor();displayteacher();}
};

int main()
{
    doctor_teacher dt;
    dt.setdoctor_teacher("��","�ڿ�A","����ѧ");
    dt.displaydoctor_teacher();
}
