/*
��ģ��point�����ݳ�Ա��ƽ��
����ģ��average�������ƽ��ֵ
*/
#include <iostream>
using namespace std;
const int N=10;

template <class Tc>//��ģ��
class Point{
private:
    Tc x;
public:
	Point(Tc x1):x(x1){}
	Tc Showsquare();//{Tc y=x*x;return y;}
};
template <class Tc>//��Ա�������ⶨ��������ģ��
Tc Point<Tc>::Showsquare(){Tc y=x*x;return y;}

template <class T>//����ģ��
float average(T *array,int size)
{
	   T sum =0;
	   for(int i=0;i<size;i++) sum+=array[i];
	   return sum/size;
}
int main()
{
    Point <int> p(2);//ʵ��������<>ָ������
    cout << "Square of point p :" <<p.Showsquare() << endl;

    int a[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    float b[N] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10 };
    cout << "Average of array a :" << average( a,10 ) << endl;
    cout << "Average of array b :" << average( b,10 ) << endl;
}
