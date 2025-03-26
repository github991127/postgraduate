/* */
#include <iostream>
#include <string>
using namespace std;

//void PrintArray(int array[])//等同下函数
void PrintArray(int* array, int len)
{
    //此处计算的是指针，无法得出数组长度
    int size = sizeof(array) / sizeof(array[0]);
    cout << "size = " << size << endl;
    cout << "len = " << len << endl;

    for (int i = 0; i < len; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void PointerArray()
{

    int arr1[3] = { 1, 2, 3 };//数组
    int* arr2 = new int[5]{1, 2, 3, 4, 5};//指针

    //如果把数组作为表达式使用，会衰减为一个指针
    cout << arr1 << endl;
    cout << arr2 << endl;
    cout << *(arr1+1) << endl;//当编译器看到下标运算符（[]）时，它实际上将其转换为指针加法和间接寻址
    cout << *(arr2+1) << endl;

    //如果把数组传参，会衰减为一个指针
    PrintArray(arr1,sizeof(arr1) / sizeof(arr1[0]));
    PrintArray(arr2, 5);
}

int main()
{
    PointerArray();
}
