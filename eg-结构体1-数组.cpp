/*
�ṹ������������ɼ�
��ѧ���ɼ����ֵ
*/
#include <iostream>
using namespace std;
const int N=10;
struct student{
    char *name;//������Ϊname[N]������������С��ֻ�����β�ʱ���ø�����
    double score;
};

int main ()
{
    //student s1[]={{"aaa",81},{"bbb",82},{"ccc",83},{"ddd",84}};//����Ϊname[N]ʱ�ַ���ֱ�Ӹ�ֵ
    char ch[4][N]={"aaa","bbb","ccc","ddd"};
    student s1[]={{ch[0],81},{ch[1],82},{ch[2],83},{ch[3],84}};//�ַ���ֱ�Ӹ�ֵ��*name�Ƿ�

    int size,i=0,n;
    double max=0;
    size=sizeof(s1)/sizeof(student);//ȷ���ṹ�����,student�ɻ�Ϊs1[0]
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

