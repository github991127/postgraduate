/*
0 'NULL'|48 '0'|65 'A'|97 'a'
�����ַ�ת��Ϊchar��
�Ƚ��ַ�ת��Ϊint��ASCII
*/
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    int i=0;
    char ch[50]={'2','0','a',(char)57,57,0,57};
    //cout<<"'a'-'0'=97-48="<<ch[2]-ch[1]<<endl;
    cout<<ch<<endl;//0ΪNULL,��ֹ���
    while(ch[i])
    {
        if(ch[i]>0)cout<<ch[i];
        i++;
    }
    cout<<endl;
    i=0;
    while(ch[i])
    {
        if(ch[i]>'0')cout<<ch[i];//'0'��48
        i++;
    }
}
