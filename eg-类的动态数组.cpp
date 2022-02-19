/*
��MyArray��ԱΪ��̬����
���캯��MyArray()
�������캯��MyArray()
��������~MyArray()

��SortArray�̳���MyArray
��Ա����sort()����
*/
#include <iostream>
using namespace std;
class MyArray
{
public:
	MyArray(int len);
	MyArray(const MyArray&ma);
	~MyArray();
	void Input();
	void Output();
protected://private����
	int *alist;
	int length;
};
MyArray::MyArray(int len)
{
	length=len;
	alist=new int[len];//�Ѷ������飬���迪�ٿռ�
}
MyArray::MyArray(const MyArray&ma)
{
	int i=0;
	length=ma.length;
	alist=new int[length];//�������죬���¿��ٿռ�
	for(i=0;i<length;i++)
		alist[i]=ma.alist[i];
}
MyArray::~MyArray()
{
	delete[]alist;//�ͷ�����ռ�
}
void MyArray::Input()
{
	int i;
	for(i=0;i<length;i++)
		cin>>alist[i];

}
void MyArray::Output()
{
	int i;
	for(i=0;i<length;i++)
		cout<<alist[i]<<" ";
	cout<<endl;
}
class SortArray:public MyArray{
public:
	SortArray(int len):MyArray(len){}//����Ϊ���ι��죬�����붨�庬�ι���
	void Sort();
};
void SortArray::Sort()//ð�������С����
{
	int i,j;
	int temp;
	for(i=0;i<length-1;i++)
		for(j=0;j<length-i-1;j++)
			if(alist[j]>alist[j+1])
			{
				temp=alist[j];
				alist[j]=alist[j+1];
				alist[j+1]=temp;
			}
}
int main()
{
	int N;
	cout<<"������Ҫ����ĸ���:"<<endl;
	cin>>N;
	SortArray s(N);
	cout<<"������"<<N<<"��Ԫ��:"<<endl;
	s.Input();
	s.Sort();
	s.Output();
}
