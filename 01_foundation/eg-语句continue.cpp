/*continue用法*/
#include <iostream>
using namespace std;
const int N=6;

int main ()
{
    for(int k=1;k<=2;k++)
    {
            for(int i=1;i<=N;i++)
        {
            cout<<i;
            if(i%2==0)continue;//跳转到句3：i++
            if(k==2)break;//结束内层循环
            cout<<"A"<<endl;
        }
    cout<<endl<<"--"<<endl;
    }
}
