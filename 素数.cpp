/*
IsPrime(int n)�ж��Ƿ�������
*/
#include "iostream"
#include "cmath"
using namespace std;
const int N=100;
bool IsPrime(int n)//��int���и��ŷ�Χ�����������ж���һ����1�������ͷ���false
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
