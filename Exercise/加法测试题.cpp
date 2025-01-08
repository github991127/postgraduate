/*一位数相加测试题*/
#include<iostream>
#include<ctime>//srand()
using namespace std;
int main()
{
    int x,y,z;
    srand(time(0));//重置seed,每次随机数不同
    while(1)
    {
    x = rand() % 10;//随机数取余
    y = rand() % 10;
    cout<<x<<" + "<<y<<" = ";
    cin>>z;
    while( z != x+y )
    {
      cout<<"×请重做\n" ;
      cout<<x<<" + "<<y<<" = ";
      cin>>z;
    }
    cout<<"√\n" ;
    }
}
