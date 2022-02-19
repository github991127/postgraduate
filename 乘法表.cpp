/*³Ë·¨±í*/
#include <iostream>
#include <iomanip>//setw(2)
using namespace std;

int main ()
{
    for(int j=1; j<=9; j++)
    {
        for(int i=1; i<=j; i++)
        cout<<i<<"*"<<j<<"="<<setw(2)<<i*j<<" ";
        cout<<endl;
    }
}
