/*
���Լ����ŷ�����շת�����
*/
#include <iostream>
#include <string>
using namespace std;
//const int N=10;

int gcd(int m, int n)
{
    int k;
    while(n){ k=m%n; m=n; n=k; }
    return m;
}

int main ()
{
    int a=8,b=12;
    //cin>>a>>b;
    cout<<gcd(a,b);
}
