/*�ַ����鳤����ֹ��*/
#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    char str[]={"hello!"};
    char ch[]={'h','e','l','l','o','!'};//����ֹ�������ǹ涨��СΪ7��ϵͳ�Զ����
    strcat(ch,str);
    cout<<strlen(str)<<endl;
    cout<<strlen(ch)<<endl;//���ܶ�����ֹ���ַ���ʹ��
}
