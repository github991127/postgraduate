/*
凯撒密码
*/
#include <iostream>
using namespace std;
const int N=100;

void kaisa (char *ch)
{
    int i,j,order=0,letter;
    cout<<"密钥(+-整数):"<<endl;
    cin>>i;
    cout<<endl<<"明文:"<<endl;
    j=0;
    while(ch[j])
    {
        if(ch[j]>=97&&ch[j]<=122)order=97;
        if(ch[j]>=65&&ch[j]<=90)order=65;
        if(order)//字符为字母
        {
            letter=ch[j]-order;
            letter=(260+letter+i)%26;//字符运算后是第几位，260防止负数溢出
            cout<<char(order+letter);
        }
        else cout<<ch[j];
        j++;
        order=0;
    }
    cout<<endl;
}
int main ()
{
    char ch[N];
    cout<<"密文:"<<endl;
    cin.getline(ch,N);
    kaisa (ch);
}
