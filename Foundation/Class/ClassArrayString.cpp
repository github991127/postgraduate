/*
类数据成员为数组
数组传数组名，指针传递
string对象传对象名
*/
#include <iostream>
#include <string>
using namespace std;
const int N = 5;

class Book
{
private:
    float* flo;
    char* ch;
    string str;
    int num;

public:
    // 默认构造函数
    Book () = default;
    // *传递数组名
    Book(char* c, string s)
    {
        ch = c;
        str = s;
    }
    // 隐式的以合成默认构造函数初始化
    Book(float* f, char* c, string s, int n):flo(f), ch(c), str(s), num(n){}

    void display()
    {
        int i = 0;
        cout << "float:";
        while (i < N)cout << flo[i++] << " ";
        cout << endl;
        cout << "char:" << ch << endl;
        cout << "string:" << str << endl;
        cout << "int:" << num << endl;
    }
};

int main()
{
    system("chcp 65001");
    int i = 0;
    float flo[N] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char ch[N] = {'a', 'b', 'c', 'd', 'e'};
    string str = "hello world";
    int num = 2;

    Book book(flo, ch, str, num);
    book.display();
}
