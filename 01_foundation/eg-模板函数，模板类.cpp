/*
类模板point求数据成员的平方
函数模板average求数组的平均值
*/
#include <iostream>
using namespace std;
const int N=10;

template <class Tc>//类模板
class Point{
private:
    Tc x;
public:
	Point(Tc x1):x(x1){}
	Tc Showsquare();//{Tc y=x*x;return y;}
};
template <class Tc>//成员函数类外定义须声明模板
Tc Point<Tc>::Showsquare(){Tc y=x*x;return y;}

template <class T>//函数模板
float average(T *array,int size)
{
	   T sum =0;
	   for(int i=0;i<size;i++) sum+=array[i];
	   return sum/size;
}
int main()
{
    Point <int> p(2);//实例化须在<>指定类型
    cout << "Square of point p :" <<p.Showsquare() << endl;

    int a[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    float b[N] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10 };
    cout << "Average of array a :" << average( a,10 ) << endl;
    cout << "Average of array b :" << average( b,10 ) << endl;
}
