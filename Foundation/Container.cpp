#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <deque>
#include <queue>
#include <stack>
#include <functional> // 用于priority_queue的比较函数
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
using namespace std;

// vector 为单个类型对象的容器，长度可变。迭代器间接访问容器中的对象，避免使用指针来直接访问
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
    cout << endl;
}

// Array 通过指针进行访问元素,长度固定
void ArrayBase()
{
    // string listS[] = {"ab", "ab", "ab"};
    // string listCopy[] = listS; //内置数组不能拷贝
    array<string, 3> arrS = {"ab", "ab", "ab"};
    array<string, 3> arrCopy = arrS; //Array可以拷贝
    for (auto& s : arrS) s = s + "CD";
    //arrS.append(""); //❎Array数组不能添加元素
    for (int i = 0; i < 3; ++i)
    {
        if (!arrS[i].empty()) cout << arrS[i] << endl;
        else cout << "empty";
    }
}

// 使用deque初始化并输出三种容器适配器：stack queue priority_queue
void dequeBase()
{
    deque<int> dq = {1, 2, 3, 4, 5};

    // stack 操作 ：push_back pop_back back ，除 array 和 forward_list 都可以构造
    stack<int, deque<int>> stk(dq);
    cout << "Stack elements: ";
    while (!stk.empty())
    {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;

    // queue 操作：back push_back front ，list 和 deque 可用于构造
    queue<int, deque<int>> que(dq);
    cout << "Queue elements: ";
    while (!que.empty())
    {
        cout << que.front() << " ";
        que.pop();
    }
    cout << endl;

    // priority_queue 操作：front push_back pop_back ，vector 和 deque 可用于构造
    priority_queue<int, deque<int>, less<int>> pq(dq.begin(), dq.end());
    cout << "Priority Queue elements (max-heap): ";
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

void setBase()
{
    set<int> mySet = {1, 2, 3, 4, 5};

    mySet.insert(6);
    cout << "Set after insertion: ";
    for (const auto& elem : mySet)
    {
        cout << elem << " ";
    }
    cout << endl;

    mySet.erase(4);
    cout << "Set after deletion: ";
    for (const auto& elem : mySet)
    {
        cout << elem << " ";
    }
    cout << endl;
}

void mapBase()
{
    map<int, string> myMap = {
        {1, "one"},
        {2, "two"},
        {3, "three"},
        {4, "four"},
        {5, "five"}
    };

    // 插入
    myMap.insert({6, "six"});
    cout << "Map after insertion: " << endl;
    for (const auto& pair : myMap)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // 更新
    auto it = myMap.find(3);
    if (it != myMap.end())
    {
        it->second = "THREE";
    }
    cout << "Map after update: " << endl;
    for (const auto& pair : myMap)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // 删除
    myMap.erase(4);
    cout << "Map after deletion: " << endl;
    for (const auto& pair : myMap)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }
}

void printUmapInfo(const unordered_map<int, string>& umap)
{
    cout << "umap 初始桶数: " << umap.bucket_count() << endl;
    cout << "umap 最大可使用桶数: " << umap.max_bucket_count() << endl;
    cout << "umap 当前存在的键值对: " << umap.size() << endl;
    cout << "umap 初始负载因子: " << umap.load_factor() << endl;
    cout << "umap 最大负载因子: " << umap.max_load_factor() << endl;
}

void unorderedMapBase(){
    unordered_map<int, string> myMap = {
        {1, "one"},
        {2, "two"},
        {3, "three"},
    };
    // 插入
    myMap.insert({4, "four"});
    myMap.emplace(make_pair (5, "five"));//基本同insert，但相比insert效率更高
    cout << "Unordered Map after insertion: " << endl;
    for (const auto& pair : myMap)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // 更新
    auto it = myMap.find(3);
    if (it != myMap.end())
    {
        it->second = "THREE";
    }
    cout << "Unordered Map after update: " << endl;
    for (const auto& pair : myMap)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // 删除
    myMap.erase(4);
    cout << "Unordered Map after deletion: " << endl;
    for (const auto& pair : myMap){
        cout << pair.first << " -> " << pair.second << endl;
    }

    printUmapInfo(myMap);
}

int main()
{
    system("chcp 65001");
    // VectorBase();
    // ArrayBase();
    // dequeBase();
    // setBase();
    // mapBase();
    unorderedMapBase();
}
