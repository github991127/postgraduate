/*产生N个AB之间的随机数，每次不同*/
#include <iostream>
#include<ctime>//srand()
using namespace std;
const int A=7,B=9,N=20;//AB之间
int main ()
{
    if(A>=B){cout<<"不符合左边界＜右边界"<<endl;return 0;}
    int x,y,i;
    x=B-A+1;
    y=A;
    i=N;
    srand(time(0));//重置seed,每次随机数不同
    cout<<N<<"个"<<A<<"到"<<B<<"的随机数为："<<endl;
    while(i--)cout<<rand()%x +y<<" ";
    cout<<endl;
}
