/*
���������ַ������������
*/
#include <iostream>
using namespace std;

struct node
{
    char ch;
    node *next;
};

void show(node *head)		               //�������
{
    node *p = head;
    cout << "�����е��ַ���: \n";
    while(p)
    {
        cout << p->ch;
        p = p->next;
    }
    cout << endl;
}

int main()
{
    node *head,*p;
    char str;
    head = NULL;
    while( (str = getchar()) != '\n' )		//����һ���ַ�
    {
        p = new node;			     		//�����½��
	    p->ch = str;
	    p->next = head;		          	//�����ͷ
	    head = p;
    }
   show(head);
}


