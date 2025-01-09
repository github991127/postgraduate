/* */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//vector 为单个类型对象的容器，长度可变。迭代器间接访问容器中的对象，避免使用指针来直接访问
void VectorBase()
{
    vector<string> vecS(3, "AB");
    for (auto& s : vecS) s = s + "cd";
    vecS.push_back("");
    // 在 for 循环体内不能添加元素.push_back 会改变 vector 的大小，使得 vector 的迭代器无效
    for (auto it = vecS.begin(); it != vecS.end(); ++it)
    {
        if (!it->empty()) cout << *it << endl;
        else cout << "empty";
    }
}

//Array 通过指针进行访问元素,长度固定
void ArrayBase()
{
    string arrS[] = {"X", "", "X"};
    //arrS.append("X"); //❎Array数组不能添加元素
    for (int i = 0; i < 3; ++i)
    {
        if (!arrS[i].empty()) arrS[i] = "ab";
        else arrS[i] = "empty";
    }
    for (int i = 0; i < 3; ++i) cout << arrS[i] << endl;
}

int main()
{
    // VectorBase();
    ArrayBase();
}
