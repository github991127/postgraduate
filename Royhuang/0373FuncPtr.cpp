#include <iostream>
#include <vector>
#include <functional>
using namespace std;
using comp = bool(*)(const int&, const int&);

bool CompareAbs(const int& a, const int& b)
{
    return (a * a > b * b);
}

// void SortAbs(vector<int>& vec,int size,comp func)//函数指针使用别名
void SortAbs(vector<int>& vec, int size, function<bool(const int&, const int&)> func) //函数指针使用function
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (func(vec[j], vec[j + 1]))
            {
                swap(vec[j], vec[j + 1]);
            }
        }
    }
}

void FuncPtr()
{
    vector<int> vec{1, -2, 3, -4, 5};
    SortAbs(vec, vec.size(), CompareAbs); //函数作为参数指针
    for (auto i : vec)
    {
        cout << i << " ";
    }
}

void Lamda()
{
    vector<int> vec{1, -2, 3, -4, 5};
    SortAbs(vec, vec.size(), [](const int& a, const int& b) { return (a * a > b * b); }); //lamda表达式作为参数指针

    //lamda存储-函数指针，要求[]为空
    auto func = [](const int& a, const int& b) { return (a * a > b * b); };
    //lamda存储-function
    function<bool(const int&, const int&)> func2 = [](const int& a, const int& b) { return (a * a > b * b); };
}

int main()
{
    FuncPtr();
    Lamda();
}
