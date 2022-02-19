/*
IsPrime(int n)判断是否是素数
*/
#include "iostream"
#include "cmath"
using namespace std;
const int N=100;
bool IsPrime(int n)//对int进行根号范围内因数数量判定，一旦有1个因数就返回false
{
	for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)return false;
    return true;
}

int main()
{
	for(int i=1;i<=N;i++)
        if(IsPrime(i))cout<<i<<"\t";
	return 0;
}
