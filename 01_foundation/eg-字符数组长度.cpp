/*
strlen(������)����\0����,sizeof(������)��Ϊ���鳤��N
����.length()����\0�������������ַ�
*/
#include<iostream>
#include<cstring>
using namespace std;
const int N=9;
int main(){
cout<<"�����鳤��";
char ch1[N]={};
cout<<strlen(ch1)<<" "<<sizeof(ch1)<<" ";
string str1;
cout<<str1.length()<<endl;

cout<<"9���ռ�4���ַ����鳤��";
char ch2[N]={'A',0,0,'B'};
cout<<strlen(ch2)<<" "<<sizeof(ch2)<<" ";
//cout<<ch2<<endl;//A
string str2={'A',0,0,'B'};
cout<<str2.length()<<endl;
//cout<<str2<<endl;//A�տ�B

cout<<"�����ַ����鳤��"<<endl<<"�������ַ���";
char ch3[N];
cin>>ch3;
cout<<strlen(ch3)<<" "<<sizeof(ch3)<<" ";
cout<<endl<<"�������ַ���";
string str3;
cin>>str3;
cout<<str3.length()<<endl;
}
