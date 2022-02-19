/*
统计已存在文档novel.txt中单词个数（无回车）
文件输入流i：getline(ch,N)
*/
#include<iostream>
#include<fstream>
using namespace std;
const int N=1000;

bool isLetter ( char letter ){  //判断字符是不是字母
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
    iofile.getline(ch,N);//回车结束
    //iofile>>ch;//空格,回车结束
    cout<<ch<<endl;
    int letterSum = 0;
    for(int i=0; ch[i]!='\0'; i++){  //如果起一个字符是字母后一个字符不是字母，那么就可以看成此处有一个单词
        if( (isLetter( ch[i] ) == true) && (isLetter( ch[i+1] ) == false) ){
            letterSum++;
        }
    }
    iofile.close();

    iofile.open("file.txt",ios::out);
	if (!iofile){cerr << "open file.txt error!" << endl;exit(1);}
	iofile<< "英文单词个数：" << letterSum << endl;
	cout <<"英文单词个数：" <<letterSum << endl;
	iofile.close();
}
