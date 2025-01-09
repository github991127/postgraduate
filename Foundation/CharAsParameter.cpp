#include <iostream>
#include <string>
using namespace std;

void F1(char ch1[])
{
    (*ch1)++;
    cout << *ch1 << endl;
}

//F1,F2等价，数组参数永远是指针传递
void F2(char* p)
{
    (*p)++;
    cout << *p << endl;
}

//若想不改变原数组，提前拷贝或声明const参数
void F3(const char ch3[])
{
    //(*ch3)++; //不可改值
}

//F3,F4等价
void F4(const char* p)
{
    const char* s = p++; //指向常量的指针，可改向不可改值，
    // char* f = p; // 指向常量的指针，不能赋给非const
    cout << *s << endl;
    cout << *p << endl;
}

// 使用引用避免拷贝 较大类型
bool isShorter(const string& s1, const string& s2)
{
    return s1.size() < s2.size();
}


int main()
{
    //数组无法拷贝，作参数均为指针传递，有两种等价方式：数组名或指针，不希望改变原值，参数加const
    char ch[] = {65, 65, 65, 65, 65};
    // F1(ch);
    // cout << "ch:" << ch << endl;
    F2(ch);
    cout << "ch:" << ch << endl;

    char chx[] = {69, 68, 67, 66, 65};
    // F3(chx);
    // cout << "chx:" << chx << endl;
    F4(chx);
    cout << "chx:" << chx << endl;

    cout << isShorter("A", "11");
}
