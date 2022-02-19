/*
类数据成员为数组
数组传数组名，指针传递
string对象传对象名
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
        Book(float *f,char *c,string s,int  n){flo=f;ch=c;str=s;num=n;}//*n传递数组名
        void display()
        {   int i=0;
            cout<<"float数组：";while(i<N)cout<<flo[i++]<<" ";cout<<endl;
            cout<<"char数组："<<ch<<endl;
            cout<<"字符串："<<str<<endl;
            cout<<"int："<<num<<endl;
        }
        void display2()
        {
            cout<<"float数组第2个数："<<flo[1]<<endl;
            cout<<"char数组第2个字符："<<ch[1]<<endl;
            cout<<"字符串第2个字符："<<str[1]<<endl;
            cout<<"int："<<num<<endl;
        }

};

int main()
{
    int i=0;
	float flo[N];
	char ch[N];
	string str;
	int num;
	cout<<"请输入float数组：";while(i<N)cin>>flo[i++];
	cout<<"请输入char字符串：";cin>>ch;
    cout<<"请输入string字符串：";cin>>str;
	cout<<"请输入int：";cin>>num;
	cout<<endl;
	Book book(flo,ch,str,num);
	book.display();
	cout<<endl;
	book.display2();
}
