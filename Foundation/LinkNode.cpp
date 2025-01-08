#include <iostream>
using namespace std;

struct node
{
    char ch;
    node* next;
};

void show(node* head) //输出链表
{
    node* p = head;
    cout << "链表中的字符逆序输出为：\n";
    while (p)
    {
        cout << p->ch;
        p = p->next;
    }
    cout << endl;
}

//链表输入字符串，逆序输出
int main()
{
    system("chcp 65001");
    node *head, *p;
    char str;
    head = NULL;
    while ((str = getchar()) != '\n') //输入一行字符
    {
        p = new node; //建立新结点
        p->ch = str;
        p->next = head; //插入表头
        head = p;
    }
    show(head);
}
