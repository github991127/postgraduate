/*
��������
*/
#include <iostream>
using namespace std;
const int N=100;

void kaisa (char *ch)
{
    int i,j,order=0,letter;
    cout<<"��Կ(+-����):"<<endl;
    cin>>i;
    cout<<endl<<"����:"<<endl;
    j=0;
    while(ch[j])
    {
        if(ch[j]>=97&&ch[j]<=122)order=97;
        if(ch[j]>=65&&ch[j]<=90)order=65;
        if(order)//�ַ�Ϊ��ĸ
        {
            letter=ch[j]-order;
            letter=(260+letter+i)%26;//�ַ�������ǵڼ�λ��260��ֹ�������
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
    cout<<"����:"<<endl;
    cin.getline(ch,N);
    kaisa (ch);
}
