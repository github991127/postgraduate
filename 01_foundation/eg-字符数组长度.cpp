/*
strlen(数组名)遇到\0结束,sizeof(数组名)恒为数组长度N
对象.length()遇到\0不结束，当做字符
*/
#include<iostream>
#include<cstring>
using namespace std;
const int N=9;
int main(){
cout<<"空数组长度";
char ch1[N]={};
cout<<strlen(ch1)<<" "<<sizeof(ch1)<<" ";
string str1;
cout<<str1.length()<<endl;

cout<<"9个空间4个字符数组长度";
char ch2[N]={'A',0,0,'B'};
cout<<strlen(ch2)<<" "<<sizeof(ch2)<<" ";
//cout<<ch2<<endl;//A
string str2={'A',0,0,'B'};
cout<<str2.length()<<endl;
//cout<<str2<<endl;//A空空B

cout<<"输入字符数组长度"<<endl<<"请输入字符串";
char ch3[N];
cin>>ch3;
cout<<strlen(ch3)<<" "<<sizeof(ch3)<<" ";
cout<<endl<<"请输入字符串";
string str3;
cin>>str3;
cout<<str3.length()<<endl;
}
