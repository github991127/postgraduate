#include <iostream>
#include <array>
#include <string>
#include <vector>
using namespace std;

//std::array不会衰减为指针，可以使用foreach遍历
void PrintArray(const array<int, 5>& arr)
{
    for(const auto& i:arr)
    {
        cout << i << " ";
    }
    cout << endl;
}
void PrintVector(const vector<int>& vec)
{
    //按照size
    for(const auto& i:vec)
    {
        cout << i << " ";
    }
    cout << endl;
}

void StdArray()
{
    array<int,5> arr1 = { 5, 3, 2, 4, 6 };
    std::sort(arr1.begin(), arr1.end());
    PrintArray(arr1);
}

void StdVector()
{
    vector<int> vec1 = { 15, 13, 12, 14, 16 };
    std::sort(vec1.begin(), vec1.end());
    vec1.resize(3);
    cout << vec1.size() << endl;//大小=3
    cout << vec1.capacity() << endl;//容量=5
    PrintVector(vec1);
}

void DoubleNum(int& num)
{
    num *= 2;
}

bool CompareAbs(const int& a,const int& b)
{
    return (a * a < b * b);
}

bool ContainsString(const string& str)
{
    return (str.find("le") != string::npos);
}

void StdFunc()
{
    vector<int> vec2 = { -3, -1, 0, 2, 4};
    for_each(vec2.begin(), vec2.end(), DoubleNum);

    sort(vec2.begin(), vec2.end(), CompareAbs);
    // sort(vec2.begin(), vec2.end(),greater<int>());//降序排序
    PrintVector(vec2);

    array<string, 4> arr = { "apple", "banana", "walnut", "lemon" };
    auto found = find_if(arr.begin(), arr.end(), ContainsString);
    if (found != arr.end())
    {
        cout << *found << endl;
    }else
    {
        cout << "not found" << endl;
    }

    auto count = count_if(arr.begin(), arr.end(), ContainsString);
    cout << count << endl;

}

int main()
{
    StdArray();
    StdVector();
    StdFunc();
}
