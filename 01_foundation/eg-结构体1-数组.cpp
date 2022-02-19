/*
结构体包含姓名，成绩
求学生成绩最大值
*/
#include <iostream>
using namespace std;
const int N=10;
struct student{
    char *name;//若定义为name[N]必须给出数组大小（只有作形参时不用给出）
    double score;
};

int main ()
{
    //student s1[]={{"aaa",81},{"bbb",82},{"ccc",83},{"ddd",84}};//定义为name[N]时字符串直接赋值
    char ch[4][N]={"aaa","bbb","ccc","ddd"};
    student s1[]={{ch[0],81},{ch[1],82},{ch[2],83},{ch[3],84}};//字符串直接赋值给*name非法

    int size,i=0,n;
    double max=0;
    size=sizeof(s1)/sizeof(student);//确定结构体个数,student可换为s1[0]
    cout<<size<<endl;

    while(i<=size)
    {
        if(s1[i].score>max)
            {
                max=s1[i].score;
                n=i;
            }
        i++;
    }
    cout<<s1[n].name<<s1[n].score;
}

