/*
函数模板排序算法
*/
#include <iostream>
using namespace std;
const int N=10;

template <class T>//选择函数模板从大到小
void sort_choose(T *a,int size)
{
	   T max,mid;
	   int i,j,k;
	   for(i=0;i<=size-2;i++)
       {
           max=a[i];k=i;
           for(j=i+1;j<=size-1;j++)
           {
               if(a[j]>max) {max=a[j];k=j;}
           }
           if(i!=k) {mid=a[k];a[k]=a[i];a[i]=mid;}
       }
}

template <class T>//冒泡函数模板从大到小
void sort_bubble(T *a,int size)
{
	   T mid;
	   int i,j;
	   bool flag;
	   for(i=0;i<=size-2;i++)
       {
           flag=false;
           for(j=0;j<=size-i-2;j++)
           {
               if(a[j]<a[j+1]) {mid=a[j];a[j]=a[j+1];a[j+1]=mid;flag=true;}
           }
           if(flag!=true) return;
       }
}

int main()
{
    int i=0;
    float a[N] = { 1, 2, 3, 4, 5, 6, 7, -1.1, };
    i=0;
    while(i<N)cout<<a[i++]<<"   ";
    cout<<endl;
    sort_choose(a,N);cout<<"sort_choose:"<<endl;
    //sort_bubble(a,N);cout<<"sort_bubble:"<<endl;
    i=0;
    while(i<N)cout<<a[i++]<<"   ";
    cout<<endl;
}
