/*
�����ݳ�ԱΪ����
���鴫��������ָ�봫��
string���󴫶�����
*/
#include <iostream>
#include <string>
using namespace std;
const int N=5;
class Book{
    private:float   *flo;
            char   *ch;
            string str;
            int    num;

    public:
        Book(float *f,char *c,string s,int  n){flo=f;ch=c;str=s;num=n;}//*n����������
        void display()
        {   int i=0;
            cout<<"float���飺";while(i<N)cout<<flo[i++]<<" ";cout<<endl;
            cout<<"char���飺"<<ch<<endl;
            cout<<"�ַ�����"<<str<<endl;
            cout<<"int��"<<num<<endl;
        }
        void display2()
        {
            cout<<"float�����2������"<<flo[1]<<endl;
            cout<<"char�����2���ַ���"<<ch[1]<<endl;
            cout<<"�ַ�����2���ַ���"<<str[1]<<endl;
            cout<<"int��"<<num<<endl;
        }

};

int main()
{
    int i=0;
	float flo[N];
	char ch[N];
	string str;
	int num;
	cout<<"������float���飺";while(i<N)cin>>flo[i++];
	cout<<"������char�ַ�����";cin>>ch;
    cout<<"������string�ַ�����";cin>>str;
	cout<<"������int��";cin>>num;
	cout<<endl;
	Book book(flo,ch,str,num);
	book.display();
	cout<<endl;
	book.display2();
}
