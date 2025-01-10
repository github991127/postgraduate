#include <iostream>
#include <fstream>
using namespace std;

// 文件读写
bool FileIO()
{
    int a;
    double x;
    char str[10];
    char fname[] = "test2015.txt"; //文件名
    cout << "输入int，double，字符数组：" << endl;
    cin >> a >> x >> str; //键盘写入变量内容

    fstream iofile(fname, ios::out);
    if (!iofile) return false;
    iofile << a + 1 << " " << x + 1 << " " << str << "!" << endl; //<<写入内容到文件必须用空格或回车隔开
    iofile.close();

    int a1;
    double x1;
    char str1[10];
    iofile.open(fname, ios::in);
    if (!iofile) return false;
    iofile >> a1 >> x1 >> str1; //>>当遇到空格或回车，第一个变量读出结束
    cout << "a1=" << a1 << "\nx1=" << x1 << "\nstr1=" << str1 << endl;
    return true;
}

// 文件追加：文件1输入N个数;文件2输入N个数，再加上文件1输入的N个数
bool FileAdd()
{
    const int N = 2;
    int a[N], i, b;
    char fname[2][10] = {"f1.dat", "f2.dat"}; //文件名

    fstream iofile1(fname[0], ios::out);
    fstream iofile2(fname[1], ios::out); //同时打开文件1,2的输出流
    if (!iofile1) return false;
    if (!iofile2) return false;
    for (i = 0; i < N; i++)
    {
        cin >> a[i];
        iofile1 << a[i] << " ";
    }
    for (i = 0; i < N; i++)
    {
        cin >> a[i];
        iofile2 << a[i] << " ";
    }
    iofile1.close();
    iofile2.close();

    iofile1.open(fname[0], ios::in); //无须再次声明，只需换一种方式打开
    iofile2.open(fname[1], ios::app);
    if (!iofile1) return false;
    if (!iofile2) return false;
    for (i = 0; i < N; i++)
    {
        iofile1 >> a[i];
        iofile2 << a[i] << " ";
    }
    iofile1.close();
    iofile2.close();

    iofile2.open(fname[1], ios::in);
    for (i = 0; i < 2 * N; i++)
    {
        iofile2 >> b;
        cout << b << " ";
    }
    iofile2.close();
    return true;
}

//按行从键盘输出到文件中:文件输入流i：循环输入while(cin.getline(ch,N))循环内break
bool FileOEnter()
{
    const int N = 2;
    char ch[N];
    ofstream ofile("按行从键盘输出到文件中.txt");
    if (!ofile) return false;
    while (cin.getline(ch, N))
    {
        if (ch[0] == '\0')break;
        ofile << ch << endl;
        cout << ch << endl;
    }
    ofile.close();
    return true;
}

int main()
{
    system("chcp 65001");

    if (FileIO() == false) return 0;
    if (FileAdd() == false) return 0;
    if (FileOEnter() == false) return 0;

    cout << "ok" << endl;
}
