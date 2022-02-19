/*
输出等腰三角形，*填充
*/
#include <iostream>
using namespace std;
const int N=26;
int main()
{
    int i,j;
    for(i=1; i<=N;i++)
    {
         for(j=1;j<=N-i;j++)cout<<" ";
         for(j=1;j<=2*i-1;j++)cout<<"*";
         cout<<endl;
    }
}
