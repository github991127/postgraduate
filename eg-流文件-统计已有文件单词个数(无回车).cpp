/*
ͳ���Ѵ����ĵ�novel.txt�е��ʸ������޻س���
�ļ�������i��getline(ch,N)
*/
#include<iostream>
#include<fstream>
using namespace std;
const int N=1000;

bool isLetter ( char letter ){  //�ж��ַ��ǲ�����ĸ
        if( ( letter >='a'&&letter<='z') || (letter>= 'A'&&letter<='Z') ){
            return true;
        }
        else{
            return false;
        }
    }

int main(){
    fstream iofile;
    iofile.open( "novel.txt",ios::in);
    if (!iofile){cerr << "open novel.txt error!" << endl;exit(1);}
    char ch[N];
    iofile.getline(ch,N);//�س�����
    //iofile>>ch;//�ո�,�س�����
    cout<<ch<<endl;
    int letterSum = 0;
    for(int i=0; ch[i]!='\0'; i++){  //�����һ���ַ�����ĸ��һ���ַ�������ĸ����ô�Ϳ��Կ��ɴ˴���һ������
        if( (isLetter( ch[i] ) == true) && (isLetter( ch[i+1] ) == false) ){
            letterSum++;
        }
    }
    iofile.close();

    iofile.open("file.txt",ios::out);
	if (!iofile){cerr << "open file.txt error!" << endl;exit(1);}
	iofile<< "Ӣ�ĵ��ʸ�����" << letterSum << endl;
	cout <<"Ӣ�ĵ��ʸ�����" <<letterSum << endl;
	iofile.close();
}
