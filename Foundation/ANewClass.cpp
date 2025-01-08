/* */
#include <iostream>
#include <string>
using namespace std;

class Point
{
protected: //private err
    int x;

public:
    Point(int x1): x(x1)
    {
    }

    virtual int area() =0;
    virtual int volume() { return x; }
};

class A : public Point
{
public:
    A(int x1): Point(x1)
    {
    }

    int area() { return x; }
    int volume() { return x; }
};

class B : public Point
{
private:
    int y;

public:
    B(int x1, int y1): Point(x1), y(y1)
    {
    }

    int area() { return x + y; }
    int volume() { return x + y; }
};

int main()
{
    Point* p;
    A a1(1), a2(1);
    B b1(2, 3), b2(2, 3);

    p = &a1;
    cout << "A's area is " << p->area() << endl;
    cout << "A's volume is " << a2.volume() << endl;
    p = &b1;
    cout << "B's area is " << p->area() << endl;
    cout << "B's volume is " << b2.volume() << endl;
}

/*
float x=0;double y=0;
char ch;string str;
int a[N]={};char ch[N]={};

    while(ch[i])
    {
        if(ch[i]>0)cout<<ch[i];
        i++;
    }

    for(int i=1;i<=N;i++)
    {
        int a=0;
        for(int j=1;j<=i;j++)
        {
            if(i=0)break;
            cout<<i<<endl;
        }
    }

    if(i)
    {
        i--;
    }

class A{
    private:static int num;
            int a,b;
    public:void fun1();
            A(int a1,int b1):a(a1),b(b1){}
            ~A(){}
};
*/
