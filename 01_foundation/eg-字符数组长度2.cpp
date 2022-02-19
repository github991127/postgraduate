/*字符数组长度终止符*/
#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    char str[]={"hello!"};
    char ch[]={'h','e','l','l','o','!'};//无终止符，除非规定大小为7，系统自动添加
    strcat(ch,str);
    cout<<strlen(str)<<endl;
    cout<<strlen(ch)<<endl;//不能对无终止符字符串使用
}
