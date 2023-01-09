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

int Delete(Node* p,int index)
{
    int x=-1;

    if(index<0 || index>length(p))
        return x;

    p=Head;
    
    if(index==1)
    {
        Head->prev->next = Head->next;
        Head->next->prev = Head->prev;
        x= p->data;
        Head=Head->next;
        delete p;
        return x;
    }

    else
    {
        Node* q;
        for(int i=0; i<index-1; i++)
        {
            p=p->next;
            q=p;
        } 
        p->prev->next = p->next;
        p->next->prev = p->prev;
        x= q->data;
        p=p->next;
        delete q;
        return x;
    }
}

int main() 
{
    int A[] = {0,1,2,3,4,5,6};
    Create(A,7);

    cout << "Length is : " << length(Head) << endl;
    Display(Head);

    Delete(Head, 4);
    Display(Head);

    Delete(Head, 3);
    Display(Head);

    Delete(Head, 2);
    Display(Head);

    return 0;
}
