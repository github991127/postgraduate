/*
�ݹ�׳ˣ�
*/
#include <iostream>
#include <cstring>
using namespace std;

long long int A(int x)
{
    if(x==1)return 1;
    else return x*A(x-1);
}
int main()
{
    int a=10;//21
    long long int b=9.223E18;//9.224E18;
    cout<<A(a)<<endl;//���Ϊ20��
    cout<<b<<endl;//���e18
}
