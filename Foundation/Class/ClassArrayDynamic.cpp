/*
类MyArray成员为动态数组
构造函数MyArray()
拷贝构造函数MyArray()
析构函数~MyArray()

类SortArray继承类MyArray
成员函数sort()排序
*/
#include <iostream>
using namespace std;

class MyArray
{
public:
    MyArray(int len);
    MyArray(const MyArray& ma);
    ~MyArray();
    void Input();
    void Output();

protected: //private错误
    int* alist;
    int length;
};

MyArray::MyArray(int len)
{
    length = len;
    alist = new int[len]; //堆对象数组，按需开辟空间
}

MyArray::MyArray(const MyArray& ma)
{
    int i = 0;
    length = ma.length;
    alist = new int[length]; //拷贝构造，重新开辟空间
    for (i = 0; i < length; i++)
        alist[i] = ma.alist[i];
}

MyArray::~MyArray()
{
    delete[]alist; //释放数组空间
}

void MyArray::Input()
{
    int i;
    for (i = 0; i < length; i++)
        cin >> alist[i];
}

void MyArray::Output()
{
    int i;
    for (i = 0; i < length; i++)
        cout << alist[i] << " ";
    cout << endl;
}

class SortArray : public MyArray
{
public:
    SortArray(int len): MyArray(len)
    {
    } //父类为含参构造，子类须定义含参构造
    void Sort();
};

void SortArray::Sort() //冒泡排序从小到大
{
    int i, j;
    int temp;
    for (i = 0; i < length - 1; i++)
        for (j = 0; j < length - i - 1; j++)
            if (alist[j] > alist[j + 1])
            {
                temp = alist[j];
                alist[j] = alist[j + 1];
                alist[j + 1] = temp;
            }
}

int main()
{
    system("chcp 65001");
    const int N = 2;
    // cout<<"请输入要输入的个数:"<<endl;
    // cin>>N;
    SortArray s(N);
    s.Input();
    s.Sort();
    s.Output();
}
