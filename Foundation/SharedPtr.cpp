#include <iostream>
#include <string>
#include <memory>
#include <vector>
using namespace std;

void SmartPtr()
{
    shared_ptr<int> p1 = make_shared<int>(2); // 指向值为2的 int
    auto p2 = make_shared<int>(3); // 指向值为3的 int
    p2 = p1; // 递增p1所指向的对象的引用计数,递减p2原来指向的对象的引用计数,原来指向的对象已没有引用者，智能指针会自动释放
    cout << *p1 << endl;
    cout << *p2 << endl;

    shared_ptr<int> p3(new int(1024));
}

void NewPtr()
{
    // 值初始化
    int* p1 = new int(1024);

    // 列表初始化
    vector<int>* p2 = new vector<int>{0, 1, 2, 4, 5};

    // 数组初始化
    // int *p3 = new int[5]; // [可以是变量]
    int* p3 = new int[5]{2}; // 5 个初始化为 0 的int

    cout << *p1 << endl;
    for (auto i : *p2)
    {
        cout << i << " ";
    }
    cout << endl;

    delete p1;
    delete p2;
    delete[] p3;
}

int main()
{
    // SmartPtr();
    NewPtr();
}
