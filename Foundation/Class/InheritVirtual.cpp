/*
class person
class doctor虚继承person
class teacher虚继承person
class doctor_teacher继承doctor，teacher
*/
#include <iostream>
#include <string>
using namespace std;

class person
{
private: //无须protected
    string name;

public:
    void setperson(string n) { name = n; } //不使用构造函数
    void displayperson() { cout << "Name=" << name << endl; }
};

class doctor : virtual public person
{
private:
    string depart;

public:
    void setdoctor(string d) { depart = d; } //不用给基类赋值
    void displaydoctor() { cout << "HospitalDepart=" << depart << endl; }
};

class teacher : virtual public person
{
private:
    string depart;

public:
    void setteacher(string d2) { depart = d2; }
    void displayteacher() { cout << "ScoolDepart=" << depart << endl; }
};

class doctor_teacher : public doctor, public teacher
{
public:
    void setdoctor_teacher(string n, string d, string d2)
    {
        setperson(n);
        setdoctor(d);
        setteacher(d2);
    }

    void displaydoctor_teacher()
    {
        displayperson();
        displaydoctor();
        displayteacher();
    }
};

int main()
{
    doctor_teacher dt;
    dt.setdoctor_teacher("Wen", "Cardio", "Math");
    dt.displaydoctor_teacher();
}
