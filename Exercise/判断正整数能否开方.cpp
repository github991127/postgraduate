/*
issquare(int n)判断整数能否开方
*/
#include <iostream>
using namespace std;
const int N=1000;
bool issquare(int n)
{
    int k=1;
    while(n>0)
    {
        n=n-k;
        k+=2;
    }
    return n==0;
}

int main ()
{
    for(int i=2;i<=N;i++)
        if(issquare(i))cout<<i<<"\t";
}
