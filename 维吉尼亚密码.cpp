/*
维吉尼亚密码,结果写入文件
*/
#include <iostream>
#include <fstream>
using namespace std;
const int N=100;

void weijiniya (ostream &ofile,char *ch)//输出流传参才能使用
{
    cout<<endl<<"明文:"<<endl;
    ofile<<endl<<"明文:"<<endl;
    int i,j,order=0,letter;
    for(i=0;i<=26;i++)
    {
        j=0;
        while(ch[j])
        {
            if(ch[j]>=97&&ch[j]<=122)order=97;
            if(ch[j]>=65&&ch[j]<=90)order=65;
            if(order)
            {
                letter=ch[j]-order;
                letter=(letter+i)%26;
                cout<<char(order+letter);
                ofile<<char(order+letter);
            }
            else
                {cout<<ch[j];ofile<<ch[j];}
            j++;
            order=0;
        }
        cout<<endl;
        ofile<<endl;
    }
}
int main ()
{
    char ch[N];
    ofstream ofile("password.txt");
    if(!ofile){cerr<<"error";exit(1);}
    cout<<"密文:"<<endl;
    ofile<<"密文:"<<endl;
    cin.getline(ch,N);
    ofile<<ch<<endl;
    weijiniya (ofile,ch);
    ofile.close();
}
