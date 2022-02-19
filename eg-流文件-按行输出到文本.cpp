/*
按行从键盘输出到文件中
文件输入流i：循环输入while(cin.getline(ch,N))循环内break
*/
#include <iostream>
#include <fstream>
using namespace std;
const int N=30;

int main()
{
    char ch[N];
    ofstream ofile("按行从键盘输出到文件中.txt");
    if(!ofile) return 0;
    while(cin.getline(ch,N))
    {
        if(ch[0]=='\0')break;
        ofile<<ch<<endl;
        cout<<ch<<endl;
    }
    ofile.close();
}
