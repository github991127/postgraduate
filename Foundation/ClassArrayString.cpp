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
    Book(float* f, char* c, string s, int n)
    {
        flo = f;
        ch = c;
        str = s;
        num = n;
    } //*n传递数组名
    void display()
    {
        int i = 0;
        cout << "float";
        while (i < N)cout << flo[i++] << " ";
        cout << endl;
        cout << "char" << ch << endl;
        cout << "string" << str << endl;
        cout << "int" << num << endl;
    }

    void display2()
    {
        cout << "float-2" << flo[1] << endl;
        cout << "char-2" << ch[1] << endl;
        cout << "string-2" << str[1] << endl;
        cout << "int" << num << endl;
    }
};

int main()
{
    system("chcp 65001");
    int i = 0;
    float flo[N];
    char ch[N];
    string str;
    int num;
    cout << "float:";
    while (i < N)cin >> flo[i++];
    cout << "char:";
    cin >> ch;
    cout << "string:";
    cin >> str;
    cout << "int:";
    cin >> num;
    cout << endl;
    Book book(flo, ch, str, num);
    book.display();
    cout << endl;
    book.display2();
}
