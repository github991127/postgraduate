#include <iostream>
#include <vector>
#include <functional>
using namespace std;

class BaseClass
{
public:
    int m_iNum;
    // 基类必须有虚函数，保持多态性才能使用dynamic_cast
    virtual void foo()
    {
    };
};

class DerivedClass : public BaseClass
{
public:
    char* m_szName[100];

    void bar()
    {
    };
};

void StaticCast()
{
    int a = 10;
    double b = static_cast<double>(a);

    double c = 9.9;
    int d = static_cast<int>(c);// 9
    cout << b << endl << d << endl;
}

void DynamicCast()
{
    DerivedClass* pDerived = dynamic_cast<DerivedClass*>(new BaseClass());// 父类->子类，动态类型转换，安全的。结果是NULL
    BaseClass* pBase = dynamic_cast<BaseClass*>(new DerivedClass());
    if (pDerived == nullptr)
    {
        cout << "pDerived is nullptr" << endl;
    }
    if (pBase == nullptr)
    {
        cout << "pBase is nullptr" << endl;
    }
}

int main()
{
    StaticCast();
    DynamicCast();
}
