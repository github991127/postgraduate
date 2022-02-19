/*
Boolean��������bool����*�ͻ�+������
bool��ö������BoolConst
*/
#include <iostream>
using namespace std;

enum BoolConst { False=0 , True=1 }; //����ö������
class Boolean
{
    protected:
        BoolConst logic;
    public:
        Boolean(BoolConst x = False) { logic = x; }
        void print() const { logic? cout<<"TRUE" : cout<<"FALSE"; }
        friend Boolean operator +(const Boolean & obj1, const Boolean & obj2)
        { return (obj1.logic || obj2.logic) ? Boolean(True) : Boolean(False); }
        friend Boolean operator *(const Boolean & obj1, const Boolean & obj2)
        { return (obj1.logic && obj2.logic) ? Boolean(True) : Boolean(False); }
};

int main()
{
    Boolean a(False), b(True), c, d ;
    c = a * b;
    d = a + b;
    a.print();cout<<endl;
    b.print();cout<<endl;
    c.print();cout<<endl;
    d.print();cout<<endl;
}
