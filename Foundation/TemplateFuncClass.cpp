#include <iostream>
using namespace std;

//类模板point求数据成员的平方
template <class Tc>
class Point
{
private:
    Tc x;

public:
    Point(Tc x1): x(x1)
    {
    }

    Tc ShowSquare(); //{Tc y=x*x;return y;}
};

template <class Tc> //成员函数类外定义须声明模板
Tc Point<Tc>::ShowSquare()
{
    Tc y = x * x;
    return y;
}

//函数模板Average求数组的平均值
template <class T>
float Average(T* array, int size)
{
    T sum = 0;
    for (int i = 0; i < size; i++) sum += array[i];
    return sum / size;
}

int main()
{
    Point<int> p1(2); //实例化须在< >指定类型
    cout << "Square of point p1 :" << p1.ShowSquare() << endl;
    Point<float> p2(2.5);
    cout << "Square of point p2 :" << p2.ShowSquare() << endl;

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Average of array a :" << Average(a, sizeof(a) / sizeof(int)) << endl;
    float b[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10};
    cout << "Average of array b :" << Average(b, sizeof(b) / sizeof(float)) << endl;
}
