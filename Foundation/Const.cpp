/* */
#include <iostream>
#include <string>
using namespace std;

void ConstRef()
{
    const int v1 = 1;
    // int &refV1 = v1;//❎不能将const int &绑定到非const int &
    const int& refV1 = v1;
    // refV1 = 0;//❎不能给const int &赋值

    int v2 = 2;
    const int& refV2 = v2; //对引用可参与的操作作出只读限定
    // refV2 = 0;//❎不能给const int &赋值
}

void ConstPointer()
{
    //指向常量的指针（pointer to const）
    const int v1 = 1;
    // int *poiV1 = &v1; //❎常量必须用指向常量的指针来指
    const int* poiV1 = &v1;
    // *poiV1 = 0; //❎不能给const int *赋值
    cout << *poiV1 << endl;

    int v2 = 2;
    int* poiV22 = &v2; //变量无所谓谁来指
    const int* poiV2 = &v2;
    // *poiV2 = 0; //❎不能给const int *赋值
    v2 = 22;
    cout << *poiV2 << endl;

    //const 指针（const pointer）
    int v3 = 3;
    int* const poiV3 = &v3;
    *poiV3 = 33;
    // poiV3 = &v2; //❎把 * 放在 const 之前说明指针是一个常量，可改值不可改向
    cout << *poiV3 << endl;
}

int main()
{
    // ConstRef();
    ConstPointer();
}
