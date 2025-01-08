/*
判断字符串2是是否在字符串1中，是则返回出现在第一次的位置
可以无限次检测输入结果
*/
#include <iostream>                                    //存放了输入输出流
using namespace std;                                  //使用命名空间
const int N=30;

int index(char *s1,char *t1)
{
      char *s;char *t;
      int num=1;                                       //用来记载位置数
      while(*s1)
      {
          s=s1;
          t=t1;
          while(*s!='\0'&&*t!='\0'&&*s==*t){s++;t++;}//如果对应的元素相等，且这两个字符串都没有到结束符
          if(*t=='\0')return num;
          num++;
          s1++;
     }
     return -1;
}

int main()
{
     while(1)                                                  //可以无限次检测输入结果
       {
             char *s=new char[N];
             char *t=new char[N];
             //char s[N],t[N];
             cout<<"----------------"<<endl;
             cout<<"请输入字符串s："<<endl;
             gets(s);                                           //可输入空格字符
             cout<<"请输入字符串t："<<endl;
             gets(t);
             int n=index(s,t);
             if(n==-1)
                    cout<<t<<"不在"<<s<<"中！"<<endl;
             else
                    cout<<t<<"在"<<s<<"中左起第"<<n<<"个位置！"<<endl;
        }
}
