/*
�ļ�1����N����
�ļ�2����N�������ټ����ļ�1�����N����
����ļ�2
*/
#include <iostream>
#include <fstream>
using namespace std;
const int N=2;
int main()
{
    int a[N],i,b;
    char fname[2][10]={"f1.dat","f2.dat"};//�ļ���

    fstream iofile1(fname[0],ios::out);
    fstream iofile2(fname[1],ios::out);//ͬʱ���ļ�1,2�������
    if(!iofile1) return 0;
    if(!iofile2) return 0;
    for(i=0;i<N;i++){cin>>a[i];iofile1<<a[i]<<" ";}
    for(i=0;i<N;i++){cin>>a[i];iofile2<<a[i]<<" ";}
    iofile1.close();
    iofile2.close();

    iofile1.open(fname[0],ios::in);//�����ٴ�������ֻ�軻һ�ַ�ʽ��
    iofile2.open(fname[1],ios::app);
    if(!iofile1) return 0;
    if(!iofile2) return 0;
    for(i=0;i<N;i++){iofile1>>a[i];iofile2<<a[i]<<" ";}
    iofile1.close();
    iofile2.close();

    iofile2.open(fname[1],ios::in);
    for(i=0;i<2*N;i++){iofile2>>b;cout<<b<<" ";}
    iofile2.close();
}
