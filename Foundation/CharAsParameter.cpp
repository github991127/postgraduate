#include <iostream>
#include <string>
using namespace std;

void F1(char ch2[]) //[N]与F1等价
{
    (*ch2)++;
    cout << *ch2 << endl;
}

void F2(char* p) //F1,F2等价，数组参数永远是指针传递
{
    (*p)++;
    cout << *p << endl;
}

void F3(const char ch3[]) //若想不改变原数组，提前拷贝或声明const参数
{
    //(*ch3)++;错误
}

void F4(const char* p) //F3,F4等价
{
    const char* s = p++; //指向常量的指针，可改向不可改值，不能赋给非const
    cout << *s << endl;
    cout << *p << endl;
}


int main()
{
    //数组作参数均为指针传递，有两种：数组名或指针，不希望改变原值，参数加const
    char ch[] = {65, 65, 65, 65, 65};
    F1(ch);
    cout << "ch:" << ch << endl;
    F2(ch);
    cout << "ch:" << ch << endl;
    //F3(ch);
    //F4(ch);
}
