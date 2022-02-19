/* */
#include <iostream>
using namespace std;
const int N=3;
int main()
{
    char ch='Z';
    int i,j;
    for(i=1; i<=N;i++)
    {
         for(j=1;j<=N-i;j++)cout<<" ";
         cout<<ch--;
         for(j=1;j<=2*i-1-2;j++)cout<<" ";
        if(i==1){cout<<endl;continue;}
         cout<<ch--;
         cout<<endl;
    }
    i--;i--;
    for(;i>=1;i--)
    {
         for(j=1;j<=N-i;j++)cout<<" ";
         cout<<ch--;
         for(j=1;j<=2*i-1-2;j++)cout<<" ";
         if(i==1){cout<<endl;continue;}
         cout<<ch--;
         cout<<endl;
    }
}

/*
cout<<"--------------------"<<endl;
float x=0;double y=0;
char ch;string str;
int a[N]={};char ch[N]={};

    while(ch[i])
    {
        if(ch[i]>0)cout<<ch[i];
        i++;
    }

    for(int i=1;i<=N;i++)
    {
        int a=0;
        for(int j=1;j<=i;j++)
        {
            if(i=0)break;
            cout<<i<<endl;
        }
    }

    if(i)
    {
        i--;
    }

class A{
    private:static int num;
            int a,b;
    public:
        A(int a1,int b1):a(a1),b(b1){}
        ~A(){}
        void fun1();
};
*/


