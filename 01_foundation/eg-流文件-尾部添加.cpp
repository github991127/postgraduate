/*
文件1输入N个数
文件2输入N个数，再加上文件1输入的N个数
输出文件2
*/
#include <iostream>
#include <fstream>
using namespace std;
const int N=2;
int main()
{
    int a[N],i,b;
    char fname[2][10]={"f1.dat","f2.dat"};//文件名

    fstream iofile1(fname[0],ios::out);
    fstream iofile2(fname[1],ios::out);//同时打开文件1,2的输出流
    if(!iofile1) return 0;
    if(!iofile2) return 0;
    for(i=0;i<N;i++){cin>>a[i];iofile1<<a[i]<<" ";}
    for(i=0;i<N;i++){cin>>a[i];iofile2<<a[i]<<" ";}
    iofile1.close();
    iofile2.close();

    iofile1.open(fname[0],ios::in);//无须再次声明，只需换一种方式打开
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
