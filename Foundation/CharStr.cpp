#include <iostream>
#include <string>
using namespace std;
const int N = 9;

//字符数组char*遍历-大写换小写
void CharSwitch()
{
    char a[] = "aBcDE";
    // cin >> a;
    char* s = a;
    //❎a++;数组名a不同于指针，虽然a是地址但是不能a++

    //可以判断结束的内容：指针，输入的长度strlen，a[N]内容
    while (*s)
    {
        if (*s >= 65 && *s <= 90)*s += 32;
        s++;
    }
    cout << a << endl;
}

//字符串string遍历-小写换大写
void StrSwitch()
{
    int i = 0;
    string a = "aBcDE";
    // cin >> a;
    //char *s=a;//string是类对象，不能通过指针确定字符位置

    //可以判断结束的内容：输入的长度length，a[N]内容
    while (i < a.length())
    {
        if (a[i] >= 97 && a[i] <= 122)a[i] -= 'a' - 'A'; //string类对象相当于一个长度可变数组
        i++;
    }
    cout << a << endl;
}

//字符数组字符串长度
void CharStrLen()
{
    char ch1[N] = {};
    cout << "空strlen(ch1):" << strlen(ch1) << ";sizeof(ch1):" << sizeof(ch1) << endl; //0,9
    string str1;
    cout << "空str1.length():" << str1.length() << endl; //0

    //strlen(数组名)遇到\0结束,sizeof(数组名)恒为数组长度N
    char ch2[N] = {'A', 0, 0, 'B', 'C'};
    cout << "{'A',0,0,'B','C'}strlen(ch2):" << strlen(ch2) << ";sizeof(ch2):" << sizeof(ch2) << endl; //1,9
    //对象.length()遇到\0不结束，当做字符
    string str2 = {'A', 0, 0, 'B', 'C'};
    cout << "{'A',0,0,'B','C'}str2.length():" << str2.length() << endl; //5
}

//字符ASCII运算
void CharCal()
{
    // 0='NULL'，48='0'，65='A'，97='a'
    char ch[50] = {'2', '0', 'a', (char)48, 49, 0, 48};
    if(ch[2] > ch[1])
    {
        cout << "'a'-'0'=" << ch[2] - ch[1] << endl; //运算按照ASCII：97-48=49
        cout << ch << endl; //0为NULL,截止输出
    }
}

int main()
{
    system("chcp 65001");
    // CharSwitch();
    // StrSwitch();
    // CharStrLen();
    CharCal();
}
