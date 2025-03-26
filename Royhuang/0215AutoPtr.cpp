#include <iostream>
#include <memory>
using namespace std;
struct A;
struct B;
struct A2;
struct B2;
struct A 
{
    shared_ptr<B> pointer;
    ~A() 
    {
        cout << "A-Delete" << endl;
    }
};
struct B 
{
    shared_ptr<A> pointer;
    ~B() 
    {
        cout << "B-Delete" << endl;
    }
};
struct A2
{
    weak_ptr<B2> pointer;
    ~A2()
    {
        cout << "A2-Delete" << endl;
    }
};
struct B2
{
    weak_ptr<A2> pointer;
    ~B2()
    {
        cout << "B2-Delete" << endl;
    }
};
void SharedPtr()
{
    auto a = std::make_shared<A>(); // 此时指针a指向的对象记为A对象
    auto b = make_shared<B>(); // 此时指针b指向的对象记为B对象
    cout<<a.use_count()<<endl; // A对象计数：1
    cout<<b.use_count()<<endl; // B对象计数：1
    a->pointer = b;
    b->pointer = a;
    cout<<a.use_count()<<endl; // A对象计数：2，内部引用B对象
    cout<<b.use_count()<<endl; // B对象计数：2，内部引用A对象，发生循环引用
    cout<<endl;
}

void WeakPtr()
{
    auto a2 = make_shared<A2>(); // 此时指针a2指向的对象记为A2对象
    auto b2 = make_shared<B2>(); // 此时指针b2指向的对象记为B2对象
    cout<<a2.use_count()<<endl; // A2对象计数：1
    cout<<b2.use_count()<<endl; // B2对象计数：1
    a2->pointer = b2;
    b2->pointer = a2;
    cout<<a2.use_count()<<endl; // A2对象计数：1，内部引用B2对象，但B2对象不引用A2对象，避免循环引用
    cout<<b2.use_count()<<endl; // B2对象计数：1，内部引用A2对象，但A2对象不引用B2对象，避免循环引用
}

int main()
{
    SharedPtr();
    WeakPtr();
}
