#include<iostream>
using namespace std;

class Node
{
    public:
    Node* prev;
    int data;
    Node* next;
}*  Head =NULL;

void Create(int A[], int n)
{
    Node* t, *Last;
    int i;

    Head = new Node;
    Head->data = A[0];
    Head->prev = Head->next = Head;
    Last = Head;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = Last->next;
        t->prev = Last;
        Last->next = t;
        Last = t;
    }
    Head->prev = t;

    cout << " cir Doubly Linked list is created\n";
}

void Display(Node* p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    }while(p!= Head);
    cout << endl;
}

int length(Node* p)
{
    int len = 0;

    do
    {
        len++;
        p = p->next;
    }while(p!= Head);
    return len;
}

void Reverse(Node* p)
{
    do
    {
        Node* temp = p->prev;
        p->prev = p->next;
        p->next = temp;
        p=p->next;

    }while(p!= Head);
    Head = Head->next;
}


int main() 
{
    int A[] = {1,2,3,4,5};
    Create(A,5);

    cout << "Length is : " << length(Head) << endl;
    Display(Head);

    Reverse(Head);
    Display(Head);

    return 0;
}
