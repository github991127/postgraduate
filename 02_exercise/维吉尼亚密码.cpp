/*
ά����������,���д���ļ�
*/
#include <iostream>
#include <fstream>
using namespace std;
const int N=100;

void weijiniya (ostream &ofile,char *ch)//��������β���ʹ��
{
    cout<<endl<<"����:"<<endl;
    ofile<<endl<<"����:"<<endl;
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
    cout<<"����:"<<endl;
    ofile<<"����:"<<endl;
    cin.getline(ch,N);
    ofile<<ch<<endl;
    weijiniya (ofile,ch);
    ofile.close();
}
