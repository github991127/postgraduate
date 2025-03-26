#include <iostream>
#include <string>
using namespace std;

void StrChar()
{
    string str = "cp";
    const char* c_arr1 = str.c_str();
    const char* c_arr2 = str.data();

    char c_arr3[] = "changpu";
    string str2(c_arr3);

    cout << c_arr1 << endl << c_arr2 << endl << str2 << endl;
}

void StrInt()
{
    string str = "48";
    int num = stoi(str);

    int num2 = 65;
    string str2 = to_string(num2);

    cout << num << endl << str2 << endl;
}

int main()
{
    StrChar();
    StrInt();
}
