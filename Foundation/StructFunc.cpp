#include <iostream>
using namespace std;
const int N = 10;

struct Date
{
    int y, m, d;
};

int days(struct Date& a) //定义须带关键字struct
{
    int mou[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = a.d;
    for (int i = 0; i < a.m - 1; i++)sum += mou[i];
    if ((a.y % 4 == 0 && a.y % 100 != 0 || a.y % 400 == 0) && a.m > 2)sum++;
    return sum;
}

void FindDayIndex()
{
    struct Date d1 = {2020, 3, 1}, d2 = {2021, 3, 1}; //初始化须用{}
    cout << d1.y << "Y" << d1.m << "M" << d1.d << "D的天序号数：" << days(d1) << endl;
    cout << d2.y << "Y" << d2.m << "M" << d2.d << "D的天序号数：" << days(d2) << endl;
}

struct student
{
    char* name; //若定义为name[N]必须给出数组大小（只有作形参时不用给出）
    double score;
};

void FindMaxScore()
{
    //student s1[]={{"aaa",81},{"bbb",82},{"ccc",83},{"ddd",84}};//定义为name[N]时字符串直接赋值
    char ch[4][N] = {"aaa", "bbb", "ccc", "ddd"};
    student s1[] = {{ch[0], 81}, {ch[1], 82}, {ch[2], 83}, {ch[3], 84}}; //字符串直接赋值给*name非法

    int size, i = 0, n = 0;
    double max = 0;
    size = sizeof(s1) / sizeof(student); //确定结构体个数,student可换为s1[0]
    // cout << size << endl;

    while (i <= size)
    {
        if (s1[i].score > max)
        {
            max = s1[i].score;
            n = i;
        }
        i++;
    }
    cout << "max:" << s1[n].name << s1[n].score << endl;
}

int main()
{
    system("chcp 65001");
    FindMaxScore();
    FindDayIndex();
}
