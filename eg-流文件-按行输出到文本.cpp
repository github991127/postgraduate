/*
���дӼ���������ļ���
�ļ�������i��ѭ������while(cin.getline(ch,N))ѭ����break
*/
#include <iostream>
#include <fstream>
using namespace std;
const int N=30;

int main()
{
    char ch[N];
    ofstream ofile("���дӼ���������ļ���.txt");
    if(!ofile) return 0;
    while(cin.getline(ch,N))
    {
        if(ch[0]=='\0')break;
        ofile<<ch<<endl;
        cout<<ch<<endl;
    }
    ofile.close();
}
