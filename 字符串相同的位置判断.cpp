/*
�ж��ַ���2���Ƿ����ַ���1�У����򷵻س����ڵ�һ�ε�λ��
�������޴μ��������
*/
#include <iostream>                                    //��������������
using namespace std;                                  //ʹ�������ռ�
const int N=30;

int index(char *s1,char *t1)
{
      char *s;char *t;
      int num=1;                                       //��������λ����
      while(*s1)
      {
          s=s1;
          t=t1;
          while(*s!='\0'&&*t!='\0'&&*s==*t){s++;t++;}//�����Ӧ��Ԫ����ȣ����������ַ�����û�е�������
          if(*t=='\0')return num;
          num++;
          s1++;
     }
     return -1;
}

int main()
{
     while(1)                                                  //�������޴μ��������
       {
             char *s=new char[N];
             char *t=new char[N];
             //char s[N],t[N];
             cout<<"----------------"<<endl;
             cout<<"�������ַ���s��"<<endl;
             gets(s);                                           //������ո��ַ�
             cout<<"�������ַ���t��"<<endl;
             gets(t);
             int n=index(s,t);
             if(n==-1)
                    cout<<t<<"����"<<s<<"�У�"<<endl;
             else
                    cout<<t<<"��"<<s<<"�������"<<n<<"��λ�ã�"<<endl;
        }
}
